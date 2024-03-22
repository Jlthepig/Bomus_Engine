#include "SceneManager.h"
#include "GameObjectr.h"

using namespace Core;


void Core::SceneManger::SceneInit(Scene& scene)
{
	auto NewScene = std::make_shared<Scene>(Scene{});
	NewScene->Scene_Name = "";
	


};
void Core::SceneManger::SceneDelete(Scene& scene)
{
};

