#pragma once
#include <GL/glut.h>
#include "Solid.h"

class Teapot : public Solid
{
private:
	float size;

public:
	Teapot() : Solid() {}
	Teapot(Vector3D coords, Color color, Vector3D orient, float size) : Solid(coords, color, orient), size(size) {}

	inline float getSize() const {
		return this->size;
	}

	inline void setSize(const float& newSize) {
		this->size = newSize;
	}

	void Render();
};

