#pragma once
#include <vector>
#include "Solid.h"
#include "Teapot.h"
#include "Cube.h"
#include "Sphere.h"
#include "Torus.h"
#include "Cuboid.h"
#include "Cylinder.h"

using namespace std;

class Scene
{ 
private:
	vector<Solid*> gameObjects;
public:
	void addGameObject(Solid*);
	void Render();
	void Update();
};

