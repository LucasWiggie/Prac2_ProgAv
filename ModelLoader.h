#pragma once
#include "Model.h"
#include "Vector3D.h"
#include <vector>
#include "Triangle.h"
#include <string>

class ModelLoader
{
private:
	float scale;
	Model model;
	vector<Vector3D> vertexList;
	vector<Vector3D> normalList;
	float maxX;
	float minX;
	float maxY;
	float minY;
	float maxZ;
	float minZ;

	inline float getWidth();
	inline float getHeight();
	inline float getLength();
	inline void calcBoundaries(Vector3D vertex);
	inline Triangle center(Triangle triangle);
	inline Vector3D parseObjLineToVector3D(string line);

public:

};

