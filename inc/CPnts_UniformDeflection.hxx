// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CPnts_UniformDeflection_HeaderFile
#define _CPnts_UniformDeflection_HeaderFile

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
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
class Standard_DomainError;
class StdFail_NotDone;
class Standard_OutOfRange;
class Adaptor3d_Curve;
class Adaptor2d_Curve2d;


//! This classe defines an algorithm to create a set of points at the <br>
//!  positions of constant deflection of a given curve or a trimmed <br>
//!  circle. <br>
//!  The continuity of the curve must be at least C2. <br>
class CPnts_UniformDeflection  {
public:

  DEFINE_STANDARD_ALLOC

  //! creation of a indefinite UniformDeflection <br>
  Standard_EXPORT   CPnts_UniformDeflection();
  //!  Computes a uniform deflection distribution of points <br>
//!  on the curve <C>. <br>
//!  <Deflection> defines the constant deflection value. <br>
//!  The algorithm computes the number of points and the points. <br>
//!  The curve <C> must be at least C2 else the computation can fail. <br>
//!  If just some parts of the curve is C2 it is better to give the <br>
//!  parameters bounds and to use the below constructor . <br>
//!  if <WithControl> is True, the algorithm controls the estimate <br>
//!  deflection <br>
//!  when the curve is singular at the point P(u),the algorithm <br>
//!  computes the next point as <br>
//!  P(u + Max(CurrentStep,Abs(LastParameter-FirstParameter))) <br>
//!  if the singularity is at the first point ,the next point <br>
//!  calculated is the P(LastParameter) <br>
  Standard_EXPORT   CPnts_UniformDeflection(const Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real Resolution,const Standard_Boolean WithControl);
  //! As above with 2d curve <br>
  Standard_EXPORT   CPnts_UniformDeflection(const Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real Resolution,const Standard_Boolean WithControl);
  
//!  Computes an uniform deflection distribution of points on a part of <br>
//!  the curve <C>. Deflection defines the step between the points. <br>
//!  <U1> and <U2> define the distribution span. <br>
//!  <U1> and <U2> must be in the parametric range of the curve. <br>
  Standard_EXPORT   CPnts_UniformDeflection(const Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Real Resolution,const Standard_Boolean WithControl);
  //! As above with 2d curve <br>
  Standard_EXPORT   CPnts_UniformDeflection(const Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Real Resolution,const Standard_Boolean WithControl);
  //! Initialize the algoritms with <C>, <Deflection>, <UStep>, <br>
//!          <Resolution> and <WithControl> <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real Resolution,const Standard_Boolean WithControl) ;
  //! Initialize the algoritms with <C>, <Deflection>, <UStep>, <br>
//!          <Resolution> and <WithControl> <br>
  Standard_EXPORT     void Initialize(const Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real Resolution,const Standard_Boolean WithControl) ;
  //! Initialize the algoritms with <C>, <Deflection>, <UStep>, <br>
//!          <U1>, <U2> and <WithControl> <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Real Resolution,const Standard_Boolean WithControl) ;
  //! Initialize the algoritms with <C>, <Deflection>, <UStep>, <br>
//!          <U1>, <U2> and <WithControl> <br>
  Standard_EXPORT     void Initialize(const Adaptor2d_Curve2d& C,const Standard_Real Deflection,const Standard_Real U1,const Standard_Real U2,const Standard_Real Resolution,const Standard_Boolean WithControl) ;
  //! To know if all the calculus were done successfully <br>
//!  (ie all the points have been computed). The calculus can fail if <br>
//!  the Curve is not C1 in the considered domain. <br>
//!  Returns True if the calculus was successful. <br>
        Standard_Boolean IsAllDone() const;
  //! go to the next Point. <br>
        void Next() ;
  //! returns True if it exists a next Point. <br>
  Standard_EXPORT     Standard_Boolean More() ;
  //! return the computed parameter <br>
        Standard_Real Value() const;
  //! return the computed parameter <br>
        gp_Pnt Point() const;





protected:





private:

  //! algorithm <br>
  Standard_EXPORT     void Perform() ;


Standard_Boolean myDone;
Standard_Boolean my3d;
Standard_Address myCurve;
Standard_Boolean myFinish;
Standard_Real myTolCur;
Standard_Boolean myControl;
Standard_Integer myIPoint;
Standard_Integer myNbPoints;
Standard_Real myParams[3];
gp_Pnt myPoints[3];
Standard_Real myDwmax;
Standard_Real myDeflection;
Standard_Real myFirstParam;
Standard_Real myLastParam;
Standard_Real myDu;


};


#include <CPnts_UniformDeflection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif