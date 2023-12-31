#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* feast.c */
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

#include "slepceps.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsfeastsetnumpoints_ EPSFEASTSETNUMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsfeastsetnumpoints_ epsfeastsetnumpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define epsfeastgetnumpoints_ EPSFEASTGETNUMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define epsfeastgetnumpoints_ epsfeastgetnumpoints
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  epsfeastsetnumpoints_(EPS eps,PetscInt *npoints, int *__ierr)
{
*__ierr = EPSFEASTSetNumPoints(
	(EPS)PetscToPointer((eps) ),*npoints);
}
SLEPC_EXTERN void  epsfeastgetnumpoints_(EPS eps,PetscInt *npoints, int *__ierr)
{
*__ierr = EPSFEASTGetNumPoints(
	(EPS)PetscToPointer((eps) ),npoints);
}
#if defined(__cplusplus)
}
#endif
