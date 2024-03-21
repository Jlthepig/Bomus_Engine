#pragma once
#include <raylib.h>
#include <iostream>;
#include <string>
#include <vector>
#include "Componentr.h"
#include <unordered_map>
#include <typeindex>
#include <SceneManager.cpp>
#ifndef GAMEOBJECTR_H
#define GAMEOBJECTR_H


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
		enum ObjectType {
			Mesh,
			Point_Light,
			Spot_Light,
			ParticleEffect,

		};
		unsigned int ID;
		//std::vector<Component>   t_list = { };
		std::unordered_map< unsigned int,Component> Component_List;



		Vector3 Position = {};
		Vector3 Scale = {};
		Quaternion Rotation = {};


		static void InitObject( const std::string ObjectName);
		static void DeleteObject(const std::string& ObjectName);
		static void UpdateObject( const std::string& ObjectName);


	private:



	};
	#endif
	


}
