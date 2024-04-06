#pragma once
#include <raylib.h>
#include <unordered_map>
#include <memory>
#include "GameObject.h"
#include <vector>


namespace Core {






	struct Scene {

		std::string Scene_Name = "";
		std::vector<std::shared_ptr<GameObject>> GameObjectList;

	};



	class SceneManger {

	public:
		void SceneInit(Scene& scene);
		void SceneDelete(Scene& scene);

	private:


	};
}