// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeEllipse_HeaderFile
#define _StepToGeom_MakeEllipse_HeaderFile

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
#ifndef _Handle_StepGeom_Ellipse_HeaderFile
#include <Handle_StepGeom_Ellipse.hxx>
#endif
#ifndef _Handle_Geom_Ellipse_HeaderFile
#include <Handle_Geom_Ellipse.hxx>
#endif
class StepGeom_Ellipse;
class Geom_Ellipse;


//! This class implements the mapping between classes <br>
//!          Ellipse from StepGeom which describes a Ellipse from <br>
//!          Prostep and Ellipse from Geom. <br>
class StepToGeom_MakeEllipse  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Ellipse)& SC,Handle(Geom_Ellipse)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif