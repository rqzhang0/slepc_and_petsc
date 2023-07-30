#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* dsnep.c */
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
#define dsnepsetfn_ DSNEPSETFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetfn_ dsnepsetfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetfn_ DSNEPGETFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetfn_ dsnepgetfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetnumfn_ DSNEPGETNUMFN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetnumfn_ dsnepgetnumfn
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepsetminimality_ DSNEPSETMINIMALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetminimality_ dsnepsetminimality
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetminimality_ DSNEPGETMINIMALITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetminimality_ dsnepgetminimality
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepsetrefine_ DSNEPSETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetrefine_ dsnepsetrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetrefine_ DSNEPGETREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetrefine_ dsnepgetrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepsetintegrationpoints_ DSNEPSETINTEGRATIONPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetintegrationpoints_ dsnepsetintegrationpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetintegrationpoints_ DSNEPGETINTEGRATIONPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetintegrationpoints_ dsnepgetintegrationpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepsetsamplingsize_ DSNEPSETSAMPLINGSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetsamplingsize_ dsnepsetsamplingsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetsamplingsize_ DSNEPGETSAMPLINGSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetsamplingsize_ dsnepgetsamplingsize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepsetrg_ DSNEPSETRG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepsetrg_ dsnepsetrg
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dsnepgetrg_ DSNEPGETRG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dsnepgetrg_ dsnepgetrg
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  dsnepsetfn_(DS ds,PetscInt *n,FN fn[], int *__ierr)
{
*__ierr = DSNEPSetFN(
	(DS)PetscToPointer((ds) ),*n,fn);
}
SLEPC_EXTERN void  dsnepgetfn_(DS ds,PetscInt *k,FN *fn, int *__ierr)
{
*__ierr = DSNEPGetFN(
	(DS)PetscToPointer((ds) ),*k,fn);
}
SLEPC_EXTERN void  dsnepgetnumfn_(DS ds,PetscInt *n, int *__ierr)
{
*__ierr = DSNEPGetNumFN(
	(DS)PetscToPointer((ds) ),n);
}
SLEPC_EXTERN void  dsnepsetminimality_(DS ds,PetscInt *n, int *__ierr)
{
*__ierr = DSNEPSetMinimality(
	(DS)PetscToPointer((ds) ),*n);
}
SLEPC_EXTERN void  dsnepgetminimality_(DS ds,PetscInt *n, int *__ierr)
{
*__ierr = DSNEPGetMinimality(
	(DS)PetscToPointer((ds) ),n);
}
SLEPC_EXTERN void  dsnepsetrefine_(DS ds,PetscReal *tol,PetscInt *its, int *__ierr)
{
*__ierr = DSNEPSetRefine(
	(DS)PetscToPointer((ds) ),*tol,*its);
}
SLEPC_EXTERN void  dsnepgetrefine_(DS ds,PetscReal *tol,PetscInt *its, int *__ierr)
{
*__ierr = DSNEPGetRefine(
	(DS)PetscToPointer((ds) ),tol,its);
}
SLEPC_EXTERN void  dsnepsetintegrationpoints_(DS ds,PetscInt *ip, int *__ierr)
{
*__ierr = DSNEPSetIntegrationPoints(
	(DS)PetscToPointer((ds) ),*ip);
}
SLEPC_EXTERN void  dsnepgetintegrationpoints_(DS ds,PetscInt *ip, int *__ierr)
{
*__ierr = DSNEPGetIntegrationPoints(
	(DS)PetscToPointer((ds) ),ip);
}
SLEPC_EXTERN void  dsnepsetsamplingsize_(DS ds,PetscInt *p, int *__ierr)
{
*__ierr = DSNEPSetSamplingSize(
	(DS)PetscToPointer((ds) ),*p);
}
SLEPC_EXTERN void  dsnepgetsamplingsize_(DS ds,PetscInt *p, int *__ierr)
{
*__ierr = DSNEPGetSamplingSize(
	(DS)PetscToPointer((ds) ),p);
}
SLEPC_EXTERN void  dsnepsetrg_(DS ds,RG rg, int *__ierr)
{
*__ierr = DSNEPSetRG(
	(DS)PetscToPointer((ds) ),
	(RG)PetscToPointer((rg) ));
}
SLEPC_EXTERN void  dsnepgetrg_(DS ds,RG *rg, int *__ierr)
{
*__ierr = DSNEPGetRG(
	(DS)PetscToPointer((ds) ),rg);
}
#if defined(__cplusplus)
}
#endif
