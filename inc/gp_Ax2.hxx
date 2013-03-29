// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Ax2_HeaderFile
#define _gp_Ax2_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Pnt;
class gp_Dir;
class gp_Ax1;
class gp_Trsf;
class gp_Vec;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Ax2);


//!  Describes a right-handed coordinate system in 3D space. <br>
//! A coordinate system is defined by: <br>
//! -   its origin (also referred to as its "Location point"), and <br>
//! -   three orthogonal unit vectors, termed respectively the <br>
//! "X Direction", the "Y Direction" and the "Direction" (also <br>
//!   referred to as the "main Direction"). <br>
//! The "Direction" of the coordinate system is called its <br>
//! "main Direction" because whenever this unit vector is <br>
//! modified, the "X Direction" and the "Y Direction" are <br>
//! recomputed. However, when we modify either the "X <br>
//! Direction" or the "Y Direction", "Direction" is not modified. <br>
//! The "main Direction" is also the "Z Direction". <br>
//! Since an Ax2 coordinate system is right-handed, its <br>
//! "main Direction" is always equal to the cross product of <br>
//! its "X Direction" and "Y Direction". (To define a <br>
//! left-handed coordinate system, use gp_Ax3.) <br>
//! A coordinate system is used: <br>
//! -   to describe geometric entities, in particular to position <br>
//!   them. The local coordinate system of a geometric <br>
//!   entity serves the same purpose as the STEP function <br>
//!   "axis placement two axes", or <br>
//! -   to define geometric transformations. <br>
//! Note: we refer to the "X Axis", "Y Axis" and "Z Axis", <br>
//! respectively, as to axes having: <br>
//! - the origin of the coordinate system as their origin, and <br>
//! -   the unit vectors "X Direction", "Y Direction" and "main <br>
//!   Direction", respectively, as their unit vectors. <br>
//! The "Z Axis" is also the "main Axis". <br>
class gp_Ax2  {

public:

  DEFINE_STANDARD_ALLOC

  //! Creates an object corresponding to the reference <br>
//!            coordinate system (OXYZ). <br>
      gp_Ax2();
  
//!  Creates an axis placement with an origin P such that: <br>
//!   -   N is the Direction, and <br>
//!   -   the "X Direction" is normal to N, in the plane <br>
//!    defined by the vectors (N, Vx): "X <br>
//!    Direction" = (N ^ Vx) ^ N, <br>
//!  Exception: raises ConstructionError if N and Vx are parallel (same or opposite orientation). <br>
      gp_Ax2(const gp_Pnt& P,const gp_Dir& N,const gp_Dir& Vx);
  
//!  Creates -   a coordinate system with an origin P, where V <br>
//! gives the "main Direction" (here, "X Direction" and "Y <br>
//!  Direction" are defined automatically). <br>
  Standard_EXPORT   gp_Ax2(const gp_Pnt& P,const gp_Dir& V);
  //! Assigns the origin and "main Direction" of the axis A1 to <br>
//! this coordinate system, then recomputes its "X Direction" and "Y Direction". <br>
//! Note: The new "X Direction" is computed as follows: <br>
//! new "X Direction" = V1 ^(previous "X Direction" ^ V) <br>
//! where V is the "Direction" of A1. <br>
//! Exceptions <br>
//! Standard_ConstructionError if A1 is parallel to the "X <br>
//! Direction" of this coordinate system. <br>
  Standard_EXPORT     void SetAxis(const gp_Ax1& A1) ;
  
//!  Changes the "main Direction" of this coordinate system, <br>
//! then recomputes its "X Direction" and "Y Direction". <br>
//! Note: the new "X Direction" is computed as follows: <br>
//! new "X Direction" = V ^ (previous "X Direction" ^ V) <br>
//!   Exceptions <br>
//! Standard_ConstructionError if V is parallel to the "X <br>
//! Direction" of this coordinate system. <br>
  Standard_EXPORT     void SetDirection(const gp_Dir& V) ;
  
//!  Changes the "Location" point (origin) of <me>. <br>
  Standard_EXPORT     void SetLocation(const gp_Pnt& P) ;
  
//!  Changes the "Xdirection" of <me>. The main direction <br>
//!  "Direction" is not modified, the "Ydirection" is modified. <br>
//!  If <Vx> is not normal to the main direction then <XDirection> <br>
//!  is computed as follows XDirection = Direction ^ (Vx ^ Direction). <br>
//! Exceptions <br>
//! Standard_ConstructionError if Vx or Vy is parallel to <br>
//! the "main Direction" of this coordinate system. <br>
  Standard_EXPORT     void SetXDirection(const gp_Dir& Vx) ;
  
//!  Changes the "Ydirection" of <me>. The main direction is not <br>
//!  modified but the "Xdirection" is changed. <br>
//!  If <Vy> is not normal to the main direction then "YDirection" <br>
//!  is computed as  follows <br>
//!  YDirection = Direction ^ (<Vy> ^ Direction). <br>
//! Exceptions <br>
//! Standard_ConstructionError if Vx or Vy is parallel to <br>
//! the "main Direction" of this coordinate system. <br>
  Standard_EXPORT     void SetYDirection(const gp_Dir& Vy) ;
  
//!  Computes the angular value, in radians, between the main direction of <br>
//!  <me> and the main direction of <Other>. Returns the angle <br>
//!  between 0 and PI in radians. <br>
  Standard_EXPORT     Standard_Real Angle(const gp_Ax2& Other) const;
  
//!  Returns the main axis of <me>. It is the "Location" point <br>
//!  and the main "Direction". <br>
       const gp_Ax1& Axis() const;
  
//!  Returns the main direction of <me>. <br>
       const gp_Dir& Direction() const;
  
//!  Returns the "Location" point (origin) of <me>. <br>
       const gp_Pnt& Location() const;
  
//!  Returns the "XDirection" of <me>. <br>
       const gp_Dir& XDirection() const;
  
//!  Returns the "YDirection" of <me>. <br>
       const gp_Dir& YDirection() const;
  
  Standard_EXPORT     Standard_Boolean IsCoplanar(const gp_Ax2& Other,const Standard_Real LinearTolerance,const Standard_Real AngularTolerance) const;
  
//!  Returns True if <br>
//!  . the distance between <me> and the "Location" point of A1 <br>
//!    is lower of equal to LinearTolerance and <br>
//!  . the main direction of <me> and the direction of A1 are normal. <br>
//! Note: the tolerance criterion for angular equality is given by AngularTolerance. <br>
        Standard_Boolean IsCoplanar(const gp_Ax1& A1,const Standard_Real LinearTolerance,const Standard_Real AngularTolerance) const;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the point P, and assigns the result to this coordinate system. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the point P, and creates a new one. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     gp_Ax2 Mirrored(const gp_Pnt& P) const;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the axis A1, and assigns the result to this coordinate systeme. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the axis A1, and  creates a new one. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     gp_Ax2 Mirrored(const gp_Ax1& A1) const;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the plane defined by the origin, "X Direction" and "Y <br>
//!   Direction" of coordinate system A2 and  assigns the result to this coordinate systeme. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//! Performs a symmetrical transformation of this coordinate <br>
//! system with respect to: <br>
//! -   the plane defined by the origin, "X Direction" and "Y <br>
//!   Direction" of coordinate system A2 and creates a new one. <br>
//! Warning <br>
//! This transformation is always performed on the origin. <br>
//! In case of a reflection with respect to a point: <br>
//! - the main direction of the coordinate system is not changed, and <br>
//! - the "X Direction" and the "Y Direction" are simply reversed <br>
//! In case of a reflection with respect to an axis or a plane: <br>
//!   -   the transformation is applied to the "X Direction" <br>
//!    and the "Y Direction", then <br>
//!   -   the "main Direction" is recomputed as the cross <br>
//!    product "X Direction" ^ "Y   Direction". <br>
//!  This maintains the right-handed property of the <br>
//! coordinate system. <br>
  Standard_EXPORT     gp_Ax2 Mirrored(const gp_Ax2& A2) const;
  
        void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Rotates an axis placement. <A1> is the axis of the <br>
//!  rotation . Ang is the angular value of the rotation <br>
//!  in radians. <br>
        gp_Ax2 Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Applies a scaling transformation on the axis placement. <br>
//!  The "Location" point of the axisplacement is modified. <br>
//! Warnings : <br>
//!  If the scale <S> is negative : <br>
//!   . the main direction of the axis placement is not changed. <br>
//!   . The "XDirection" and the "YDirection" are reversed. <br>
//!  So the axis placement stay right handed. <br>
        gp_Ax2 Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf& T) ;
  
//!  Transforms an axis placement with a Trsf. <br>
//!  The "Location" point, the "XDirection" and the <br>
//!  "YDirection" are transformed with T.  The resulting <br>
//!  main "Direction" of <me> is the cross product between <br>
//!  the "XDirection" and the "YDirection" after transformation. <br>
        gp_Ax2 Transformed(const gp_Trsf& T) const;
  
        void Translate(const gp_Vec& V) ;
  
//!  Translates an axis plaxement in the direction of the vector <br>
//!  <V>. The magnitude of the translation is the vector's magnitude. <br>
        gp_Ax2 Translated(const gp_Vec& V) const;
  
        void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Translates an axis placement from the point <P1> to the <br>
//!  point <P2>. <br>
        gp_Ax2 Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
    const gp_Ax1& _CSFDB_Getgp_Ax2axis() const { return axis; }
    const gp_Dir& _CSFDB_Getgp_Ax2vydir() const { return vydir; }
    const gp_Dir& _CSFDB_Getgp_Ax2vxdir() const { return vxdir; }



protected:




private: 


gp_Ax1 axis;
gp_Dir vydir;
gp_Dir vxdir;


};


#include <gp_Ax2.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif