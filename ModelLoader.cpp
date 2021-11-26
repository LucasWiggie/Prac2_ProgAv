#include "ModelLoader.h"

float ModelLoader :: getWidth() {
	return (maxX - minX);
}

float ModelLoader :: getHeight() {
	return (maxY - minY);
}

float ModelLoader :: getLength() {
	return (maxZ - minZ);
}

void ModelLoader :: calcBoundaries(Vector3D vertex) {
	if (vertex.getCoordinateX() < minX) {
		minX = vertex.getCoordinateX();
	}
	if (vertex.getCoordinateX() > maxX) {
		maxX = vertex.getCoordinateX();
	}
	if (vertex.getCoordinateY() < minY) {
		minY = vertex.getCoordinateY();
	}
	if (vertex.getCoordinateY() > maxY) {
		maxY = vertex.getCoordinateY();
	}
	if (vertex.getCoordinateZ() < minZ) {
		minZ = vertex.getCoordinateZ();
	}
	if (vertex.getCoordinateZ() > maxZ) {
		maxZ = vertex.getCoordinateZ();
	}
}

Triangle ModelLoader :: center(Triangle triangle) {

	float xCenter = (maxX + minX) / 2;
	float yCenter = (maxY + minY) / 2;
	float zCenter = (maxZ + minZ) / 2;
	Vector3D center = Vector3D(xCenter, yCenter, zCenter);

	Triangle newTriangle = triangle;
	Vector3D newVertex0 = newTriangle.getVertex()[0] - center;
	Vector3D newVertex1 = newTriangle.getVertex()[1] - center;
	Vector3D newVertex2 = newTriangle.getVertex()[2] - center;

	vector<Vector3D> newVertex;
	newVertex.push_back(newVertex0);
	newVertex.push_back(newVertex1);
	newVertex.push_back(newVertex2);

	newTriangle.setVertex(newVertex);

	return newTriangle;
}

Vector3D ModelLoader :: parseObjLineToVector3D(string line) {
	ifstream in(&filePath);
}