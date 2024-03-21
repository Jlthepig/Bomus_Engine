#pragma once
#include <raylib.h>
#include "GameObjectr.h"
namespace Core {






	struct Scene {
		std::string Scene_Name = "";
		std::unordered_map< unsigned int, std::shared_ptr<GameObject> >GameObject_List;

	};



	class SceneManger {

	public:
		void SceneInit(Scene& scene );
		void SceneDelete(Scene& scene);
		
	private:
		

	};
}