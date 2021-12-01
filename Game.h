#pragma once
#include "Teapot.h"
#include "Cube.h"
#include "Sphere.h"
#include "Torus.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include <vector>
#include "Scene.h"
#include "Camera.h"
#include "Model.h"
#include "ModelLoader.h"

using namespace std;

class Game
{
private:
	Scene sceneOne;
		
public:
	void Init();
	void Render();
	void Update();
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);

};

