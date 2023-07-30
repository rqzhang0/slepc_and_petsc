#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* dshsvd.c */
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
#define dshsvdsetdimensions_ DSHSVDSETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dshsvdsetdimensions_ dshsvdsetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dshsvdgetdimensions_ DSHSVDGETDIMENSIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dshsvdgetdimensions_ dshsvdgetdimensions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dshsvdsetreorthogonalize_ DSHSVDSETREORTHOGONALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dshsvdsetreorthogonalize_ dshsvdsetreorthogonalize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dshsvdgetreorthogonalize_ DSHSVDGETREORTHOGONALIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dshsvdgetreorthogonalize_ dshsvdgetreorthogonalize
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  dshsvdsetdimensions_(DS ds,PetscInt *m, int *__ierr)
{
*__ierr = DSHSVDSetDimensions(
	(DS)PetscToPointer((ds) ),*m);
}
SLEPC_EXTERN void  dshsvdgetdimensions_(DS ds,PetscInt *m, int *__ierr)
{
*__ierr = DSHSVDGetDimensions(
	(DS)PetscToPointer((ds) ),m);
}
SLEPC_EXTERN void  dshsvdsetreorthogonalize_(DS ds,PetscBool *reorth, int *__ierr)
{
*__ierr = DSHSVDSetReorthogonalize(
	(DS)PetscToPointer((ds) ),*reorth);
}
SLEPC_EXTERN void  dshsvdgetreorthogonalize_(DS ds,PetscBool *reorth, int *__ierr)
{
*__ierr = DSHSVDGetReorthogonalize(
	(DS)PetscToPointer((ds) ),reorth);
}
#if defined(__cplusplus)
}
#endif
