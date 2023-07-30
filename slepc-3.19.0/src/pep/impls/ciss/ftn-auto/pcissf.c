#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* pciss.c */
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

#include "slepcpep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcisssetsizes_ PEPCISSSETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcisssetsizes_ pepcisssetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcissgetsizes_ PEPCISSGETSIZES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcissgetsizes_ pepcissgetsizes
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcisssetthreshold_ PEPCISSSETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcisssetthreshold_ pepcisssetthreshold
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcissgetthreshold_ PEPCISSGETTHRESHOLD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcissgetthreshold_ pepcissgetthreshold
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcisssetrefinement_ PEPCISSSETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcisssetrefinement_ pepcisssetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcissgetrefinement_ PEPCISSGETREFINEMENT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcissgetrefinement_ pepcissgetrefinement
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcisssetextraction_ PEPCISSSETEXTRACTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcisssetextraction_ pepcisssetextraction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pepcissgetextraction_ PEPCISSGETEXTRACTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pepcissgetextraction_ pepcissgetextraction
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void  pepcisssetsizes_(PEP pep,PetscInt *ip,PetscInt *bs,PetscInt *ms,PetscInt *npart,PetscInt *bsmax,PetscBool *realmats, int *__ierr)
{
*__ierr = PEPCISSSetSizes(
	(PEP)PetscToPointer((pep) ),*ip,*bs,*ms,*npart,*bsmax,*realmats);
}
SLEPC_EXTERN void  pepcissgetsizes_(PEP pep,PetscInt *ip,PetscInt *bs,PetscInt *ms,PetscInt *npart,PetscInt *bsmax,PetscBool *realmats, int *__ierr)
{
*__ierr = PEPCISSGetSizes(
	(PEP)PetscToPointer((pep) ),ip,bs,ms,npart,bsmax,realmats);
}
SLEPC_EXTERN void  pepcisssetthreshold_(PEP pep,PetscReal *delta,PetscReal *spur, int *__ierr)
{
*__ierr = PEPCISSSetThreshold(
	(PEP)PetscToPointer((pep) ),*delta,*spur);
}
SLEPC_EXTERN void  pepcissgetthreshold_(PEP pep,PetscReal *delta,PetscReal *spur, int *__ierr)
{
*__ierr = PEPCISSGetThreshold(
	(PEP)PetscToPointer((pep) ),delta,spur);
}
SLEPC_EXTERN void  pepcisssetrefinement_(PEP pep,PetscInt *inner,PetscInt *blsize, int *__ierr)
{
*__ierr = PEPCISSSetRefinement(
	(PEP)PetscToPointer((pep) ),*inner,*blsize);
}
SLEPC_EXTERN void  pepcissgetrefinement_(PEP pep,PetscInt *inner,PetscInt *blsize, int *__ierr)
{
*__ierr = PEPCISSGetRefinement(
	(PEP)PetscToPointer((pep) ),inner,blsize);
}
SLEPC_EXTERN void  pepcisssetextraction_(PEP pep,PEPCISSExtraction *extraction, int *__ierr)
{
*__ierr = PEPCISSSetExtraction(
	(PEP)PetscToPointer((pep) ),*extraction);
}
SLEPC_EXTERN void  pepcissgetextraction_(PEP pep,PEPCISSExtraction *extraction, int *__ierr)
{
*__ierr = PEPCISSGetExtraction(
	(PEP)PetscToPointer((pep) ),extraction);
}
#if defined(__cplusplus)
}
#endif
