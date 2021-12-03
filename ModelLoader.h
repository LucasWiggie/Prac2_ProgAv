#pragma once
#include "Model.h"
#include "Vector3D.h"
#include <vector>
#include "Triangle.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

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
	inline Vector3D parseObjLineToVector3D(const string& line);
	inline Triangle parseObjTriangle(const string& line);

public:
	inline Model getModel() {
		return this->model;
	}

	inline float getScale() {
		return this->scale;
	}

	inline void setScale(float newScale) {
		this->scale = newScale;
	}

	void loadModel(const string& filepath);

	void clear();
};

