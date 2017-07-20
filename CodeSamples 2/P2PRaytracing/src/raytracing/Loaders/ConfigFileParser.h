#pragma once 
//----------------------------------------------------------------------------------------------------------------
//			Filename:		MeshObject.h
//			  Author:		Adrian De Barro
//			    Date:		12/08/2015
//----------------------------------------------------------------------------------------------------------------
//			  Status: REFACTORING
//----------------------------------------------------------------------------------------------------------------
#include <string>

#include "..\Scene\Scene.h"
#include "..\CoreClasses\Camera\Camera.h"
#include "..\Light\Light.h"
#include "..\CoreClasses\GeometricObjects\GeometricObjects.h"
#include "..\CoreClasses\GeometricObjects\MeshObject.h"

using std::string;

namespace Engine
{
	//----------------------------------------------------------------------------------------------------------------
	//			Class Name: ConfigFileParser
	//		   Description: A parser which i able to take a scene description from a file and Build it
	//----------------------------------------------------------------------------------------------------------------
	//			    Status: 
	//					   TODO: To Code it
	//----------------------------------------------------------------------------------------------------------------
	class ConfigFileParser
	{
	public:
		//----------------------------------------------------------------------------------------------------------------
		//		 Method Name: LoadScene
		//		Return Value: VOID
		//		  Parameters: string
		//			  Status: READY
		//----------------------------------------------------------------------------------------------------------------
		static void LoadScene(string)
		{}
	private:
	};
	//----------------------------------------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------------------------------------