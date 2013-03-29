// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_HInterTool_HeaderFile
#define _IntPatch_HInterTool_HeaderFile

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
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class gp_Pnt2d;
class Adaptor3d_HVertex;
class gp_Pnt;


//! Tool for the intersection between 2 surfaces. <br>
//!          Regroupe pour l instant les methodes hors Adaptor3d... <br>
class IntPatch_HInterTool  {
public:

  DEFINE_STANDARD_ALLOC

  
      static  Standard_Boolean SingularOnUMin(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnUMax(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnVMin(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnVMax(const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamplesU(const Handle(Adaptor3d_HSurface)& S,const Standard_Real u1,const Standard_Real u2) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamplesV(const Handle(Adaptor3d_HSurface)& S,const Standard_Real v1,const Standard_Real v2) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamplePoints(const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   static  void SamplePoint(const Handle(Adaptor3d_HSurface)& S,const Standard_Integer Index,Standard_Real& U,Standard_Real& V) ;
  //! Returns True if all the intersection point and edges <br>
//!          are known on the Arc. <br>
//!          The intersection point are given as vertices. <br>
//!          The intersection edges are given as intervals between <br>
//!          two vertices. <br>
  Standard_EXPORT   static  Standard_Boolean HasBeenSeen(const Handle(Adaptor2d_HCurve2d)& C) ;
  //! returns the number of points which is used to make <br>
//!          a sample on the arc. this number is a function of <br>
//!          the Surface and the CurveOnSurface complexity. <br>
  Standard_EXPORT   static  Standard_Integer NbSamplesOnArc(const Handle(Adaptor2d_HCurve2d)& A) ;
  //! Returns the parametric limits on the arc C. <br>
//!          These limits must be finite : they are either <br>
//!          the real limits of the arc, for a finite arc, <br>
//!          or a bounding box for an infinite arc. <br>
  Standard_EXPORT   static  void Bounds(const Handle(Adaptor2d_HCurve2d)& C,Standard_Real& Ufirst,Standard_Real& Ulast) ;
  //! Projects the point P on the arc C. <br>
//!          If the methods returns Standard_True, the projection is <br>
//!          successful, and Paramproj is the parameter on the arc <br>
//!          of the projected point, Ptproj is the projected Point. <br>
//!          If the method returns Standard_False, Param proj and Ptproj <br>
//!          are not significant. <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean Project(const Handle(Adaptor2d_HCurve2d)& C,const gp_Pnt2d& P,Standard_Real& Paramproj,gp_Pnt2d& Ptproj) ;
  //! Returns the parametric tolerance used to consider <br>
//!          that the vertex and another point meet, i-e <br>
//!          if Abs(parameter(Vertex) - parameter(OtherPnt))<= <br>
//!          Tolerance, the points are "merged". <br>
  Standard_EXPORT   static  Standard_Real Tolerance(const Handle(Adaptor3d_HVertex)& V,const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Returns the parameter of the vertex V on the arc A. <br>
  Standard_EXPORT   static  Standard_Real Parameter(const Handle(Adaptor3d_HVertex)& V,const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Returns the number of intersection points on the arc A. <br>
  Standard_EXPORT   static  Standard_Integer NbPoints(const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Returns the value (Pt), the tolerance (Tol), and <br>
//!          the parameter (U) on the arc A , of the intersection <br>
//!          point of range Index. <br>
  Standard_EXPORT   static  void Value(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Integer Index,gp_Pnt& Pt,Standard_Real& Tol,Standard_Real& U) ;
  //! Returns True if the intersection point of range Index <br>
//!          corresponds with a vertex on the arc A. <br>
  Standard_EXPORT   static  Standard_Boolean IsVertex(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Integer Index) ;
  //! When IsVertex returns True, this method returns the <br>
//!          vertex on the arc A. <br>
  Standard_EXPORT   static  void Vertex(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Integer Index,Handle(Adaptor3d_HVertex)& V) ;
  //! returns the number of part of A solution of the <br>
//!          of intersection problem. <br>
  Standard_EXPORT   static  Standard_Integer NbSegments(const Handle(Adaptor2d_HCurve2d)& C) ;
  //! Returns True when the segment of range Index is not <br>
//!          open at the left side. In that case, IndFirst is the <br>
//!          range in the list intersection points (see NbPoints) <br>
//!          of the one which defines the left bound of the segment. <br>
//!          Otherwise, the method has to return False, and IndFirst <br>
//!          has no meaning. <br>
  Standard_EXPORT   static  Standard_Boolean HasFirstPoint(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Integer Index,Standard_Integer& IndFirst) ;
  //! Returns True when the segment of range Index is not <br>
//!          open at the right side. In that case, IndLast is the <br>
//!          range in the list intersection points (see NbPoints) <br>
//!          of the one which defines the right bound of the segment. <br>
//!          Otherwise, the method has to return False, and IndLast <br>
//!          has no meaning. <br>
  Standard_EXPORT   static  Standard_Boolean HasLastPoint(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Integer Index,Standard_Integer& IndLast) ;
  //! Returns True when the whole restriction is solution <br>
//!          of the intersection problem. <br>
  Standard_EXPORT   static  Standard_Boolean IsAllSolution(const Handle(Adaptor2d_HCurve2d)& C) ;





protected:





private:





};


#include <IntPatch_HInterTool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif