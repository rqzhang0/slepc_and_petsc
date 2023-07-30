# Author:  PETSc Team
# Contact: petsc-maint@mcs.anl.gov

def get_petsc_dir():
    import os
    return os.path.dirname(__file__)

def get_config():
    conf = {}
    conf['PETSC_DIR'] = get_petsc_dir()
    return conf
