#!/bin/sh
topdir=$(cd $(dirname "$0")/.. && pwd)
python$py "$topdir/conf/cythonize.py" \
    --working "$topdir/src" $@ \
    "slepc4py/SLEPc.pyx"
