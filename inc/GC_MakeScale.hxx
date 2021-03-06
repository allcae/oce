// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeScale_HeaderFile
#define _GC_MakeScale_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Transformation.hxx>
#include <Standard_Real.hxx>
class Geom_Transformation;
class gp_Pnt;


//! This class implements an elementary construction algorithm for
//! a scaling transformation in 3D space. The result is a
//! Geom_Transformation transformation (a scaling transformation with
//! the center point <Point> and the scaling value <Scale>).
//! A MakeScale object provides a framework for:
//! -   defining the construction of the transformation,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class GC_MakeScale 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a scaling transformation with
  //! -   Point as the center of the transformation, and
  //! -   Scale as the scale factor.
  Standard_EXPORT GC_MakeScale(const gp_Pnt& Point, const Standard_Real Scale);
  
  //! Returns the constructed transformation.
  Standard_EXPORT  const  Handle(Geom_Transformation)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_Transformation)& Operator()  const;
Standard_EXPORT operator Handle_Geom_Transformation() const;




protected:





private:



  Handle(Geom_Transformation) TheScale;


};







#endif // _GC_MakeScale_HeaderFile
