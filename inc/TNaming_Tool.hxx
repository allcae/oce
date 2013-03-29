// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Tool_HeaderFile
#define _TNaming_Tool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TNaming_UsedShapes_HeaderFile
#include <Handle_TNaming_UsedShapes.hxx>
#endif
class TNaming_Localizer;
class TNaming_NamedShape;
class TNaming_OldShapeIterator;
class TopoDS_Shape;
class TDF_LabelMap;
class TDF_Label;
class TNaming_MapOfNamedShape;
class TDF_LabelList;
class TNaming_UsedShapes;
class TopTools_MapOfShape;


//! A tool to get information on the topology of a <br>
//! named shape attribute. <br>
//! This information is typically a TopoDS_Shape object. <br>
//!  Using this tool, relations between named shapes <br>
//!  are also accessible. <br>
class TNaming_Tool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the last Modification of <NS>. <br>
//! Returns the shape CurrentShape contained in <br>
//! the named shape attribute NS. <br>
//! CurrentShape is the current state of the entities <br>
//! if they have been modified in other attributes of the same data structure. <br>
//! Each call to this function creates a new compound. <br>
  Standard_EXPORT   static  TopoDS_Shape CurrentShape(const Handle(TNaming_NamedShape)& NS) ;
  //! Returns the shape CurrentShape contained in <br>
//! the named shape attribute NS, and present in <br>
//! the updated attribute map Updated. <br>
//! CurrentShape is the current state of the entities <br>
//! if they have been modified in other attributes of the same data structure. <br>
//! Each call to this function creates a new compound. <br>
//! Warning <br>
//! Only the contents of Updated are searched.R <br>
  Standard_EXPORT   static  TopoDS_Shape CurrentShape(const Handle(TNaming_NamedShape)& NS,const TDF_LabelMap& Updated) ;
  //! Returns the NamedShape of the last Modification of <NS>. <br>
//!          This shape is identified by a label. <br>
  Standard_EXPORT   static  Handle_TNaming_NamedShape CurrentNamedShape(const Handle(TNaming_NamedShape)& NS,const TDF_LabelMap& Updated) ;
  //! Returns NamedShape the last Modification of <NS>. <br>
  Standard_EXPORT   static  Handle_TNaming_NamedShape CurrentNamedShape(const Handle(TNaming_NamedShape)& NS) ;
  //! Returns the named shape attribute defined by <br>
//! the shape aShape and the label anAccess. <br>
//! This attribute is returned as a new shape. <br>
//! You call this function, if you need to create a <br>
//! topological attribute for existing data. <br>
//! Example <br>
//! class MyPkg_MyClass <br>
//!  { <br>
//!  public: Standard_Boolean <br>
//! SameEdge(const <br>
//! Handle(OCafTest_Line)& , const <br>
//! Handle(CafTest_Line)& ); <br>
//! }; <br>
  Standard_EXPORT   static  Handle_TNaming_NamedShape NamedShape(const TopoDS_Shape& aShape,const TDF_Label& anAcces) ;
  //! Returns the entities stored in the named shape attribute NS. <br>
//! If there is only one old-new pair, the new shape <br>
//! is returned. Otherwise, a Compound is returned. <br>
//! This compound is made out of all the new shapes found. <br>
//! Each call to this function creates a new compound. <br>
  Standard_EXPORT   static  TopoDS_Shape GetShape(const Handle(TNaming_NamedShape)& NS) ;
  //! Returns the shape contained as OldShape in <NS> <br>
  Standard_EXPORT   static  TopoDS_Shape OriginalShape(const Handle(TNaming_NamedShape)& NS) ;
  //!  Returns the shape generated from S or by a <br>
//! modification of S and contained in the named <br>
//! shape Generation. <br>
  Standard_EXPORT   static  TopoDS_Shape GeneratedShape(const TopoDS_Shape& S,const Handle(TNaming_NamedShape)& Generation) ;
  
  Standard_EXPORT   static  void Collect(const Handle(TNaming_NamedShape)& NS,TNaming_MapOfNamedShape& Labels,const Standard_Boolean OnlyModif = Standard_True) ;
  //! Returns True if <aShape> appears under a label.(DP) <br>
  Standard_EXPORT   static  Standard_Boolean HasLabel(const TDF_Label& access,const TopoDS_Shape& aShape) ;
  //!  Returns  the label  of   the first apparition  of <br>
//!          <aShape>.  Transdef  is a value of the transaction <br>
//!          of the first apparition of <aShape>. <br>
  Standard_EXPORT   static  TDF_Label Label(const TDF_Label& access,const TopoDS_Shape& aShape,Standard_Integer& TransDef) ;
  
//! Returns the shape created from the shape <br>
//! aShape contained in the attribute anAcces. <br>
  Standard_EXPORT   static  TopoDS_Shape InitialShape(const TopoDS_Shape& aShape,const TDF_Label& anAcces,TDF_LabelList& Labels) ;
  //! Returns the last transaction where the creation of S <br>
//!          is valid. <br>
  Standard_EXPORT   static  Standard_Integer ValidUntil(const TDF_Label& access,const TopoDS_Shape& S) ;
  //! Returns the current shape (a Wire or a Shell) built (in the data framework) <br>
//!          from the the shapes of the argument named shape. <br>
//!          It is used for IDENTITY name type computation. <br>
  Standard_EXPORT   static  void FindShape(const TDF_LabelMap& Valid,const TDF_LabelMap& Forbiden,const Handle(TNaming_NamedShape)& Arg,TopoDS_Shape& S) ;


friend class TNaming_Localizer;
friend class TNaming_NamedShape;
friend class TNaming_OldShapeIterator;



protected:





private:

  //! Returns True if <aShape> appears under a label. <br>
  Standard_EXPORT   static  Standard_Boolean HasLabel(const Handle(TNaming_UsedShapes)& Shapes,const TopoDS_Shape& aShape) ;
  //! Returns the last transaction where the creation of S <br>
//!          is valid. <br>
  Standard_EXPORT   static  Standard_Integer ValidUntil(const TopoDS_Shape& S,const Handle(TNaming_UsedShapes)& US) ;
  //!  Returns  the label  of   the first apparition  of <br>
//!          <aShape>.  Transdef  is a value of the transaction <br>
//!          of the first apparition of <aShape>. <br>
  Standard_EXPORT   static  TDF_Label Label(const Handle(TNaming_UsedShapes)& Shapes,const TopoDS_Shape& aShape,Standard_Integer& TransDef) ;
  
  Standard_EXPORT   static  void FirstOlds(const Handle(TNaming_UsedShapes)& Shapes,const TopoDS_Shape& S,TNaming_OldShapeIterator& it,TopTools_MapOfShape& MS,TDF_LabelList& Labels) ;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif