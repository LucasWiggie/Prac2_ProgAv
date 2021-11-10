#pragma once
#include "Solid.h" 

class Cylinder : public Solid
{
private:
	double baseRadius;
	double topRadius;
	double height;
	int slices;
	int stacks;

public:
	Cylinder() : Solid(){}
	Cylinder(Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed, Vector3D speed, double bRadius, double tRadius, double height, int slices, int stacks) :
		Solid(coords, color, orient, orientSpeed, speed), baseRadius(bRadius), topRadius(tRadius), height(height), slices(slices), stacks(stacks)  {}

	inline double getBaseRadius() const{
		return this->baseRadius;
	}

	inline double getTopRadius() const {
		return this->topRadius;
	}

	inline double getHeight() const {
		return this->height;
	}

	inline int getSlices() const {
		return this->slices;
	}

	inline int getStacks() const {
		return this->stacks;
	}

	inline void setBaseRadius(const double& baseRadiusToSet) {
		this->baseRadius = baseRadiusToSet;
	}

	inline void setTopRadius(const double& topRadiusToSet) {
		this->topRadius = topRadiusToSet;
	}

	inline void setHeight(const double& heightToSet) {
		this->height = heightToSet;
	}

	inline void setSlices(const int& slicesToSet) {
		this->slices = slicesToSet;
	}

	inline void setStacks(const int& stacksToSet) {
		this->stacks = stacksToSet;
	}

	void Render();
};

