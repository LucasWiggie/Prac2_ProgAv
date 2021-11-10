#pragma once
#include <GL/glut.h>
#include "Solid.h"

class Teapot : public Solid
{
private:
	float size;

public:
	Teapot() : Solid() {}
	Teapot(Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed, Vector3D speed, float size) :
		Solid(coords, color, orient, orientSpeed, speed), size(size) {}

	inline float getSize() const {
		return this->size;
	}

	inline void setSize(const float& newSize) {
		this->size = newSize;
	}

	void Render();
};

