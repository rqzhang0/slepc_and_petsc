#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* svdksvd.c */
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

#include "slepcsvd.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdksvdseteigenmethod_ SVDKSVDSETEIGENMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdksvdseteigenmethod_ svdksvdseteigenmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdksvdgeteigenmethod_ SVDKSVDGETEIGENMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdksvdgeteigenmethod_ svdksvdgeteigenmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdksvdsetpolarmethod_ SVDKSVDSETPOLARMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdksvdsetpolarmethod_ svdksvdsetpolarmethod
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdksvdgetpolarmethod_ SVDKSVDGETPOLARMETHOD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdksvdgetpolarmethod_ svdksvdgetpolarmethod
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  svdksvdseteigenmethod_(SVD svd,SVDKSVDEigenMethod *eigen, int *__ierr)
{
*__ierr = SVDKSVDSetEigenMethod(
	(SVD)PetscToPointer((svd) ),*eigen);
}
SLEPC_EXTERN void  svdksvdgeteigenmethod_(SVD svd,SVDKSVDEigenMethod *eigen, int *__ierr)
{
*__ierr = SVDKSVDGetEigenMethod(
	(SVD)PetscToPointer((svd) ),eigen);
}
SLEPC_EXTERN void  svdksvdsetpolarmethod_(SVD svd,SVDKSVDPolarMethod *polar, int *__ierr)
{
*__ierr = SVDKSVDSetPolarMethod(
	(SVD)PetscToPointer((svd) ),*polar);
}
SLEPC_EXTERN void  svdksvdgetpolarmethod_(SVD svd,SVDKSVDPolarMethod *polar, int *__ierr)
{
*__ierr = SVDKSVDGetPolarMethod(
	(SVD)PetscToPointer((svd) ),polar);
}
#if defined(__cplusplus)
}
#endif
