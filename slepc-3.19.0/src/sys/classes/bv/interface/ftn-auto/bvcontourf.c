#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* bvcontour.c */
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

#include "slepcbv.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvscatter_ BVSCATTER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvscatter_ bvscatter
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsumquadrature_ BVSUMQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsumquadrature_ bvsumquadrature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvdotquadrature_ BVDOTQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvdotquadrature_ bvdotquadrature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvtracequadrature_ BVTRACEQUADRATURE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvtracequadrature_ bvtracequadrature
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvsvdandrank_ BVSVDANDRANK
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvsvdandrank_ bvsvdandrank
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define bvcissresizebases_ BVCISSRESIZEBASES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define bvcissresizebases_ bvcissresizebases
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  bvscatter_(BV Vin,BV Vout,VecScatter scat,Vec xdup, int *__ierr)
{
*__ierr = BVScatter(
	(BV)PetscToPointer((Vin) ),
	(BV)PetscToPointer((Vout) ),
	(VecScatter)PetscToPointer((scat) ),
	(Vec)PetscToPointer((xdup) ));
}
SLEPC_EXTERN void  bvsumquadrature_(BV S,BV Y,PetscInt *M,PetscInt *L,PetscInt *L_max,PetscScalar *w,PetscScalar *zn,VecScatter scat,PetscSubcomm subcomm,PetscInt *npoints,PetscBool *useconj, int *__ierr)
{
*__ierr = BVSumQuadrature(
	(BV)PetscToPointer((S) ),
	(BV)PetscToPointer((Y) ),*M,*L,*L_max,w,zn,
	(VecScatter)PetscToPointer((scat) ),
	(PetscSubcomm)PetscToPointer((subcomm) ),*npoints,*useconj);
}
SLEPC_EXTERN void  bvdotquadrature_(BV Y,BV V,PetscScalar *Mu,PetscInt *M,PetscInt *L,PetscInt *L_max,PetscScalar *w,PetscScalar *zn,PetscSubcomm subcomm,PetscInt *npoints,PetscBool *useconj, int *__ierr)
{
*__ierr = BVDotQuadrature(
	(BV)PetscToPointer((Y) ),
	(BV)PetscToPointer((V) ),Mu,*M,*L,*L_max,w,zn,
	(PetscSubcomm)PetscToPointer((subcomm) ),*npoints,*useconj);
}
SLEPC_EXTERN void  bvtracequadrature_(BV Y,BV V,PetscInt *L,PetscInt *L_max,PetscScalar *w,VecScatter scat,PetscSubcomm subcomm,PetscInt *npoints,PetscBool *useconj,PetscReal *est_eig, int *__ierr)
{
*__ierr = BVTraceQuadrature(
	(BV)PetscToPointer((Y) ),
	(BV)PetscToPointer((V) ),*L,*L_max,w,
	(VecScatter)PetscToPointer((scat) ),
	(PetscSubcomm)PetscToPointer((subcomm) ),*npoints,*useconj,est_eig);
}
SLEPC_EXTERN void  bvsvdandrank_(BV S,PetscInt *m,PetscInt *l,PetscReal *delta,BVSVDMethod *meth,PetscScalar *A,PetscReal *sigma,PetscInt *rank, int *__ierr)
{
*__ierr = BVSVDAndRank(
	(BV)PetscToPointer((S) ),*m,*l,*delta,*meth,A,sigma,rank);
}
SLEPC_EXTERN void  bvcissresizebases_(BV S,BV V,BV Y,PetscInt *Lold,PetscInt *Lnew,PetscInt *M,PetscInt *npoints, int *__ierr)
{
*__ierr = BVCISSResizeBases(
	(BV)PetscToPointer((S) ),
	(BV)PetscToPointer((V) ),
	(BV)PetscToPointer((Y) ),*Lold,*Lnew,*M,*npoints);
}
#if defined(__cplusplus)
}
#endif
