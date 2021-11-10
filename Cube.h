#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h";

class Cube : public Solid
{	
private:
	float size;
public:
	Cube() : Solid() {}
	Cube(Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed, Vector3D speed, float size) : 
		Solid(coords, color, orient, orientSpeed, speed), size(size) {}

	inline float getSize() const {
		return this->size;
	}

	inline void setSize(const float& newSize) {
		this->size = newSize;
	}

	void Render();
};

