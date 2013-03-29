// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_EPCOfExtPC_HeaderFile
#define _Extrema_EPCOfExtPC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Extrema_PCFOfEPCOfExtPC_HeaderFile
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class Adaptor3d_Curve;
class Extrema_CurveTool;
class Extrema_POnCurv;
class gp_Pnt;
class gp_Vec;
class Extrema_PCFOfEPCOfExtPC;
class Extrema_SeqPCOfPCFOfEPCOfExtPC;



class Extrema_EPCOfExtPC  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_EPCOfExtPC();
  
  Standard_EXPORT   Extrema_EPCOfExtPC(const gp_Pnt& P,const Adaptor3d_Curve& C,const Standard_Integer NbU,const Standard_Real TolU,const Standard_Real TolF);
  
  Standard_EXPORT   Extrema_EPCOfExtPC(const gp_Pnt& P,const Adaptor3d_Curve& C,const Standard_Integer NbU,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolU,const Standard_Real TolF);
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Integer NbU,const Standard_Real TolU,const Standard_Real TolF) ;
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Integer NbU,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolU,const Standard_Real TolF) ;
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT     void Initialize(const Standard_Integer NbU,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolU,const Standard_Real TolF) ;
  
  Standard_EXPORT     void Perform(const gp_Pnt& P) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer NbExt() const;
  
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  
  Standard_EXPORT     Standard_Boolean IsMin(const Standard_Integer N) const;
  
  Standard_EXPORT     Extrema_POnCurv Point(const Standard_Integer N) const;





protected:





private:



Standard_Boolean myDone;
Standard_Boolean myInit;
Standard_Integer mynbsample;
Standard_Real myumin;
Standard_Real myusup;
Standard_Real mytolu;
Standard_Real mytolF;
Extrema_PCFOfEPCOfExtPC myF;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif