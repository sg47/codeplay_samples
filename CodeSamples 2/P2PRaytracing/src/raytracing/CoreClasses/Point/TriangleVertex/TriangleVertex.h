#pragma once
//----------------------------------------------------------------------------------------------------------------
//			Filename:		TriangleVertex.h
//			  Author:		Adrian De Barro
//			    Date:		12/08/2015
//----------------------------------------------------------------------------------------------------------------
//			  Status: REFACTORING
//----------------------------------------------------------------------------------------------------------------

#include "..\Point3D\Point3D.h"
#include "..\..\GeometricObjects\GeometricObjects.h"

namespace Engine
{
	//----------------------------------------------------------------------------------------------------------------
	//			Class Name: TriangleVertex
	//		   Description: Represents a mesh vertex. Contains
	//----------------------------------------------------------------------------------------------------------------
	//			    Status: REFACTORING
	//----------------------------------------------------------------------------------------------------------------
	class TriangleVertex
	{
	public:
		Point3D vertex;
		Point3D normal;
		Point3D textureCoordinate;
		//----------------------------------------------------------------------------------------------------------------
		//		 Method Name: CONSTRUCTOR
		//		Return Value: VOID
		//		  Parameters: VOID
		//			  Status: READY
		//----------------------------------------------------------------------------------------------------------------
		TriangleVertex(Point3D m_vertex, Point3D m_normal, Point3D m_textureCoordinate) : vertex(m_vertex), normal(m_normal), textureCoordinate(m_textureCoordinate)
		{}
		//----------------------------------------------------------------------------------------------------------------
		//		 Method Name: CONSTRUCTOR
		//		Return Value: VOID
		//		  Parameters: VOID
		//			  Status: READY
		//----------------------------------------------------------------------------------------------------------------
		TriangleVertex(Point3D m_vertex) :vertex(m_vertex){}
		//----------------------------------------------------------------------------------------------------------------
		//		 Method Name: CONSTRUCTOR
		//		Return Value: VOID
		//		  Parameters: VOID
		//			  Status: READY
		//----------------------------------------------------------------------------------------------------------------
		TriangleVertex() {}

	private:
	};
	//----------------------------------------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------------------------------------
