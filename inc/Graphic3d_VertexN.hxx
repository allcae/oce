// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_VertexN_HeaderFile
#define _Graphic3d_VertexN_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic3d_Vertex_HeaderFile
#include <Graphic3d_Vertex.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Graphic3d_Vertex;
class Graphic3d_Vector;


//! This class allows the creation and update of <br>
//!	    a vertex with a 3D normal. <br>
class Graphic3d_VertexN  : public Graphic3d_Vertex {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a point with 0.0, 0.0, 0.0 coordinates <br>
//!	    for which the normal is 0.0, 0.0, 1.0. <br>
  Standard_EXPORT   Graphic3d_VertexN();
  //! Creates a point with coordinates <AX>, <AY>, <AZ> and <br>
//!	    for which the normal is <ANX>, <ANY>, <ANZ>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
  Standard_EXPORT   Graphic3d_VertexN(const Standard_Real AX,const Standard_Real AY,const Standard_Real AZ,const Standard_Real ANX,const Standard_Real ANY,const Standard_Real ANZ,const Standard_Boolean FlagNormalise = Standard_True);
  //! Creates a point in <APoint> for which the normal is <AVector>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
  Standard_EXPORT   Graphic3d_VertexN(const Graphic3d_Vertex& APoint,const Graphic3d_Vector& AVector,const Standard_Boolean FlagNormalise = Standard_True);
  //! Modifies the normal to the point <me>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
  Standard_EXPORT     void SetNormal(const Standard_Real NXnew,const Standard_Real NYnew,const Standard_Real NZnew,const Standard_Boolean FlagNormalise = Standard_True) ;
  //! Returns the normal to the point <me>. <br>
  Standard_EXPORT     void Normal(Standard_Real& ANX,Standard_Real& ANY,Standard_Real& ANZ) const;





protected:





private:



Standard_ShortReal MyDX;
Standard_ShortReal MyDY;
Standard_ShortReal MyDZ;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif