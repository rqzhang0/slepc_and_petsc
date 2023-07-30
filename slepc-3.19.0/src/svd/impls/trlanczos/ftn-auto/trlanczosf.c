#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* trlanczos.c */
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
#define svdtrlanczossetoneside_ SVDTRLANCZOSSETONESIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetoneside_ svdtrlanczossetoneside
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetoneside_ SVDTRLANCZOSGETONESIDE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetoneside_ svdtrlanczosgetoneside
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetgbidiag_ SVDTRLANCZOSSETGBIDIAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetgbidiag_ svdtrlanczossetgbidiag
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetgbidiag_ SVDTRLANCZOSGETGBIDIAG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetgbidiag_ svdtrlanczosgetgbidiag
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetksp_ SVDTRLANCZOSSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetksp_ svdtrlanczossetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetksp_ SVDTRLANCZOSGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetksp_ svdtrlanczosgetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetrestart_ SVDTRLANCZOSSETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetrestart_ svdtrlanczossetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetrestart_ SVDTRLANCZOSGETRESTART
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetrestart_ svdtrlanczosgetrestart
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetlocking_ SVDTRLANCZOSSETLOCKING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetlocking_ svdtrlanczossetlocking
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetlocking_ SVDTRLANCZOSGETLOCKING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetlocking_ svdtrlanczosgetlocking
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetexplicitmatrix_ SVDTRLANCZOSSETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetexplicitmatrix_ svdtrlanczossetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetexplicitmatrix_ SVDTRLANCZOSGETEXPLICITMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetexplicitmatrix_ svdtrlanczosgetexplicitmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczossetscale_ SVDTRLANCZOSSETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczossetscale_ svdtrlanczossetscale
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdtrlanczosgetscale_ SVDTRLANCZOSGETSCALE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdtrlanczosgetscale_ svdtrlanczosgetscale
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  svdtrlanczossetoneside_(SVD svd,PetscBool *oneside, int *__ierr)
{
*__ierr = SVDTRLanczosSetOneSide(
	(SVD)PetscToPointer((svd) ),*oneside);
}
SLEPC_EXTERN void  svdtrlanczosgetoneside_(SVD svd,PetscBool *oneside, int *__ierr)
{
*__ierr = SVDTRLanczosGetOneSide(
	(SVD)PetscToPointer((svd) ),oneside);
}
SLEPC_EXTERN void  svdtrlanczossetgbidiag_(SVD svd,SVDTRLanczosGBidiag *bidiag, int *__ierr)
{
*__ierr = SVDTRLanczosSetGBidiag(
	(SVD)PetscToPointer((svd) ),*bidiag);
}
SLEPC_EXTERN void  svdtrlanczosgetgbidiag_(SVD svd,SVDTRLanczosGBidiag *bidiag, int *__ierr)
{
*__ierr = SVDTRLanczosGetGBidiag(
	(SVD)PetscToPointer((svd) ),bidiag);
}
SLEPC_EXTERN void  svdtrlanczossetksp_(SVD svd,KSP ksp, int *__ierr)
{
*__ierr = SVDTRLanczosSetKSP(
	(SVD)PetscToPointer((svd) ),
	(KSP)PetscToPointer((ksp) ));
}
SLEPC_EXTERN void  svdtrlanczosgetksp_(SVD svd,KSP *ksp, int *__ierr)
{
*__ierr = SVDTRLanczosGetKSP(
	(SVD)PetscToPointer((svd) ),ksp);
}
SLEPC_EXTERN void  svdtrlanczossetrestart_(SVD svd,PetscReal *keep, int *__ierr)
{
*__ierr = SVDTRLanczosSetRestart(
	(SVD)PetscToPointer((svd) ),*keep);
}
SLEPC_EXTERN void  svdtrlanczosgetrestart_(SVD svd,PetscReal *keep, int *__ierr)
{
*__ierr = SVDTRLanczosGetRestart(
	(SVD)PetscToPointer((svd) ),keep);
}
SLEPC_EXTERN void  svdtrlanczossetlocking_(SVD svd,PetscBool *lock, int *__ierr)
{
*__ierr = SVDTRLanczosSetLocking(
	(SVD)PetscToPointer((svd) ),*lock);
}
SLEPC_EXTERN void  svdtrlanczosgetlocking_(SVD svd,PetscBool *lock, int *__ierr)
{
*__ierr = SVDTRLanczosGetLocking(
	(SVD)PetscToPointer((svd) ),lock);
}
SLEPC_EXTERN void  svdtrlanczossetexplicitmatrix_(SVD svd,PetscBool *explicitmat, int *__ierr)
{
*__ierr = SVDTRLanczosSetExplicitMatrix(
	(SVD)PetscToPointer((svd) ),*explicitmat);
}
SLEPC_EXTERN void  svdtrlanczosgetexplicitmatrix_(SVD svd,PetscBool *explicitmat, int *__ierr)
{
*__ierr = SVDTRLanczosGetExplicitMatrix(
	(SVD)PetscToPointer((svd) ),explicitmat);
}
SLEPC_EXTERN void  svdtrlanczossetscale_(SVD svd,PetscReal *scale, int *__ierr)
{
*__ierr = SVDTRLanczosSetScale(
	(SVD)PetscToPointer((svd) ),*scale);
}
SLEPC_EXTERN void  svdtrlanczosgetscale_(SVD svd,PetscReal *scale, int *__ierr)
{
*__ierr = SVDTRLanczosGetScale(
	(SVD)PetscToPointer((svd) ),scale);
}
#if defined(__cplusplus)
}
#endif
