#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* dsgsvd.c */
/* Fortran interface file */

/*
* This file was generated automatically by bfort from the C source
* file.  
 */

#ifdef PETSC_USE_POINTER_CONVERSION
#if defined(__cplusplus)
extern "C" { 
#endif 
extern void *PetscToPointer(void*);
extern int PetscFromPointer(void *);
extern void PetscRmPointer(void*);
#if defined(__cplusplus)
} 
#endif 

#else

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "slepcds.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgsvdsetdimensions_ DSGSVDSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgsvdsetdimensions_ dsgsvdsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsgsvdgetdimensions_ DSGSVDGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsgsvdgetdimensions_ dsgsvdgetdimensions
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  dsgsvdsetdimensions_(DS ds,PetscInt *m,PetscInt *p, int *__ierr)
{
*__ierr = DSGSVDSetDimensions(
	(DS)PetscToPointer((ds) ),*m,*p);
}
SLEPC_EXTERN void  dsgsvdgetdimensions_(DS ds,PetscInt *m,PetscInt *p, int *__ierr)
{
*__ierr = DSGSVDGetDimensions(
	(DS)PetscToPointer((ds) ),m,p);
}
#if defined(__cplusplus)
}
#endif
