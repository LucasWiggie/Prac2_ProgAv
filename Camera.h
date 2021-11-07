#pragma once
#include "Solid.h"

class Camera : public Solid
{
public:
	Camera() : Solid(Vector3D(), Color(), Vector3D(), Vector3D()) {}
	Camera(Vector3D coords, Color color, Vector3D orientation, Vector3D orientSpeed) : Solid(coords, color, orientation, orientSpeed) {}

	void Render();
};

