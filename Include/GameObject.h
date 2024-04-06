#pragma once
#include "raylib.h"
#include <iostream>;
#include <string>
#include <vector>
#include "Component.h"
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







		//std::vector<Component>   t_list = { };




		const std::string& Fetch_Name() const {}
		const unsigned int& Fetch_ID() const { return GameObjectID; }
		static void InitObject(const std::string ObjectName);
		static void DeleteObject(const std::string& ObjectName);
		static void UpdateObject(const std::string& ObjectName);


	private:
		std::string Name = "";
		std::vector< std::shared_ptr <Component>> Component_List;
		unsigned int	GameObjectID;

	};




};
