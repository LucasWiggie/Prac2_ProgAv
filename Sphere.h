#pragma once
#include <GL/glut.h>
#include "Vector3D.h"
#include "Color.h"
#include "Solid.h"

class Sphere : public Solid
{
private:
	double radius;
	int slices;
	int slacks;

public:
	Sphere() : Solid() {}
	Sphere(Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed, Vector3D speed, double radius, int slices, int slacks) : 
		Solid(coords, color, orient, orientSpeed, speed), radius(radius), slices(slices), slacks(slacks) {}

	inline float getRadius() const {
		return this->radius;
	}

	inline int getSlices() const {
		return this->slices;
	}

	inline int getSlacks() const {
		return this->slacks;
	}
	
	inline void setRadius(const float& radiusToSet) {
		this->radius = radiusToSet;
	}

	inline void setSlices(const int& slicesToSet) {
		this->slices = slicesToSet;
	}

	inline void setSlacks(const int& slacksToSet) {
		this->slacks = slacksToSet;
	}

	void Render();
};



