#pragma once
#include <raylib.h>
#include <GameObjectr.h>
namespace Core {






	struct Scene {
		std::string Scene_Name = "";
	};



	class SceneManger {

		void SceneInit(Scene );
		
		std::unordered_map< unsigned int, GameObject> GameObject_List;

	};
}