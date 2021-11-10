#include "Scene.h"

void Scene::addGameObject(Solid* ptr) {
	
	this->gameObjects.push_back(ptr);

}

void Scene::Render() {
	for (int i = 0; i < this->gameObjects.size(); i++) {
		gameObjects[i]->Render();
	}
}

void Scene::Update() {
	for (int i = 0; i < this->gameObjects.size(); i++) {
		gameObjects[i]->Update();
	}
}