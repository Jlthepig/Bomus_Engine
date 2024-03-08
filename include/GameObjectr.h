#pragma once
#include <raylib.h>
#include <iostream>;
#include <string>
#include <vector>
#include <Componentr.h>
#include <unordered_map>
#include <typeindex>

// create The main namespace for the engine
namespace Core {


	struct Mesh {
		// raw mesh data and stufff
	};

	

	class GameObject
	{
		/// all prperties of a game object
	public:
		
		std::string Name = "";
		std::string Tag = "";
		unsigned int ID;
		//std::vector<Component> Component_list = { };
		std::unordered_map< unsigned int,Component> Component_List;



		Vector3 Position = {};
		Vector3 Scale = {};
		Quaternion Rotation = {};


		void InitObject(std::string);
		void DeleteObject();
		void UpdateObject();


	private:



	};

	


}
