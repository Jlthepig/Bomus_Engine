#pragma once
#include <raylib.h>
#include <iostream>;
#include <string>
#include <vector>
#include "Componentr.h"
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
		
		unsigned int ID;
		//std::vector<Component>   t_list = { };
		std::unordered_map< unsigned int,Component> Component_List;



		

		static void InitObject(const std::string ObjectName);
		static void DeleteObject(const std::string& ObjectName);
		static void UpdateObject( const std::string& ObjectName);


	private:



	};
	
	


}
