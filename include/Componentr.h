#pragma once
#include <raylib.h>


// main namespace
namespace Core {
	class Component
	{
		
	public:

		


		
	private:



	};



	class TransformComponent: public Component
	{
	
		Vector3 Translation = {};
		Vector3 Scale = {};
		Quaternion Rotation = {};
	};

}
