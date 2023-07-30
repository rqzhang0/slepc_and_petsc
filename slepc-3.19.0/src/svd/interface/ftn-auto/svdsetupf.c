#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* svdsetup.c */
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
#define svdsetoperators_ SVDSETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetoperators_ svdsetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetoperators_ SVDGETOPERATORS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetoperators_ svdgetoperators
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetsignature_ SVDSETSIGNATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetsignature_ svdsetsignature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdgetsignature_ SVDGETSIGNATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdgetsignature_ svdgetsignature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetdstype_ SVDSETDSTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetdstype_ svdsetdstype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdsetup_ SVDSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdsetup_ svdsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define svdallocatesolution_ SVDALLOCATESOLUTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define svdallocatesolution_ svdallocatesolution
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  svdsetoperators_(SVD svd,Mat A,Mat B, int *__ierr)
{
*__ierr = SVDSetOperators(
	(SVD)PetscToPointer((svd) ),
	(Mat)PetscToPointer((A) ),
	(Mat)PetscToPointer((B) ));
}
SLEPC_EXTERN void  svdgetoperators_(SVD svd,Mat *A,Mat *B, int *__ierr)
{
*__ierr = SVDGetOperators(
	(SVD)PetscToPointer((svd) ),A,B);
}
SLEPC_EXTERN void  svdsetsignature_(SVD svd,Vec omega, int *__ierr)
{
*__ierr = SVDSetSignature(
	(SVD)PetscToPointer((svd) ),
	(Vec)PetscToPointer((omega) ));
}
SLEPC_EXTERN void  svdgetsignature_(SVD svd,Vec *omega, int *__ierr)
{
*__ierr = SVDGetSignature(
	(SVD)PetscToPointer((svd) ),omega);
}
SLEPC_EXTERN void  svdsetdstype_(SVD svd, int *__ierr)
{
*__ierr = SVDSetDSType(
	(SVD)PetscToPointer((svd) ));
}
SLEPC_EXTERN void  svdsetup_(SVD svd, int *__ierr)
{
*__ierr = SVDSetUp(
	(SVD)PetscToPointer((svd) ));
}
SLEPC_EXTERN void  svdallocatesolution_(SVD svd,PetscInt *extra, int *__ierr)
{
*__ierr = SVDAllocateSolution(
	(SVD)PetscToPointer((svd) ),*extra);
}
#if defined(__cplusplus)
}
#endif
