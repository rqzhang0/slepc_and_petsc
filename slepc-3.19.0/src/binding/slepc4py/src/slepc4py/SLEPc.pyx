#cython: language_level=3str
#cython: embedsignature=True
#cython: annotation_typing=False
#cython: cdivision=True
#cython: auto_pickle=False
#cython: always_allow_keywords=True
#cython: allow_none_for_extension_args=False
#cython: autotestdict=False
#cython: warn.multiple_declarators=False
#cython: optimize.use_switch=False

#cython: binding=False
#from __future__ import annotations

from __future__ import absolute_import
cimport cython
include "SLEPc/SLEPc.pyx"
