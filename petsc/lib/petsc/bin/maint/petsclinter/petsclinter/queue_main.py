#!/usr/bin/env python3
"""
# Created: Tue Jun 21 09:44:08 2022 (-0400)
# @author: Jacob Faibussowitsch
"""
import multiprocessing as mp
import petsclinter     as pl

from .classes._diag   import DiagnosticManager
from .classes._pool   import WorkerPool
from .classes._linter import Linter

from .util._timeout import timeout

class MainLoopError(pl.BaseError):
  """
  Thrown by child processes when they encounter an error in the main loop
  """
  def __init__(self, filename, *args, **kwargs):
    super().__init__(*args, **kwargs)
    self._main_loop_error_filename = filename
    return

@timeout(seconds=5)
def __handle_error(error_prefix, filename, error_queue, file_queue, base_e):
  try:
    import traceback

    # attempt to send the traceback back to parent
    exception_trace = ''.join(traceback.format_exception(base_e, chain=True))
    error_message   = f'{error_prefix} {filename}\n{exception_trace}'
    if not error_message.endswith('\n'):
      error_message += '\n'
    error_queue.put(error_message)
  except Exception as send_e:
    # if this fails then I guess we really are screwed
    send_exception_trace = ''.join(traceback.format_exception(send_e, chain=True))
    error_queue.put(f'{error_prefix} {filename}\n{send_exception_trace}\n')
  finally:
    try:
      # in case we had any work from the queue we need to release it but only after
      # putting our exception on the queue
      file_queue.task_done()
    except ValueError:
      # task_done() called more times than get(), means we threw before getting the
      # filename
      pass
  return

def __main_loop(file_queue, return_queue, linter):
  try:
    while 1:
      filename = file_queue.get()
      if filename == WorkerPool.QueueSignal.EXIT_QUEUE:
        # bail, the queue is done feeding us work
        break

      errors_left, errors_fixed, warnings, patches = linter.parse(filename).diagnostics()
      return_queue.put((
        (WorkerPool.QueueSignal.UNIFIED_DIFF, patches),
        (WorkerPool.QueueSignal.ERRORS_LEFT , errors_left),
        (WorkerPool.QueueSignal.ERRORS_FIXED, errors_fixed),
        (WorkerPool.QueueSignal.WARNING     , warnings)
      ))
      file_queue.task_done()
  except Exception as exc:
    raise MainLoopError(filename) from exc
  return

class LockPrinter:
  __slots__ = ('_verbose', '_print_prefix', '_lock')

  def __init__(self, verbose, print_prefix, lock):
    self._verbose      = verbose
    self._print_prefix = print_prefix
    self._lock         = lock
    return

  def __call__(self, *args, **kwargs):
    if self._verbose:
      kwargs.setdefault('flush', True)
      with self._lock:
        print(self._print_prefix, *args, **kwargs)
    return

def queue_main(clang_lib, updated_check_function_map, updated_classid_map, updated_diagnostics_mngr, compiler_flags, clang_options, verbose, werror, error_queue, return_queue, file_queue, lock):
  """
  main function for worker processes in the queue, does pretty much the same thing the
  main process would do in their place
  """
  def update_globals():
    import copy
    from .checks import _register

    _register.check_function_map = copy.deepcopy(updated_check_function_map)
    _register.classid_map        = copy.deepcopy(updated_classid_map)
    DiagnosticManager.disabled   = copy.deepcopy(updated_diagnostics_mngr.disabled)
    return

  # in case errors are thrown before setup is complete
  error_prefix = '[UNKNOWN_CHILD]'
  filename     = 'QUEUE SETUP'
  printbar     = 15 * '='
  try:
    # initialize the global variables
    proc         = mp.current_process().name
    print_prefix = proc + ' --'[:len('[ROOT]') - len(proc)]
    error_prefix = f'{print_prefix} Exception detected while processing'

    update_globals()
    pl.sync_print = LockPrinter(verbose, print_prefix, lock)
    pl.sync_print(printbar, 'Performing setup', printbar)
    # initialize libclang, and create a linter instance
    pl.util.initialize_libclang(clang_lib=clang_lib)
    linter = Linter(compiler_flags, clang_options=clang_options, verbose=verbose, werror=werror)
    pl.sync_print(printbar, 'Entering queue  ', printbar)

    # main loop
    __main_loop(file_queue, return_queue, linter)
  except Exception as base_e:
    try:
      if isinstance(base_e, MainLoopError):
        filename = base_e._main_loop_error_filename
    except:
      pass
    try:
      __handle_error(error_prefix, str(filename), error_queue, file_queue, base_e)
    except:
      pass
  try:
    pl.sync_print(printbar, 'Exiting queue   ', printbar)
  except:
    pass
  return
