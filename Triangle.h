#pragma once
#include "Solid.h"
#include <vector>

using namespace std;
class Triangle : public Solid
{
private:
	vector <Vector3D> vertex;
	vector <Color> vertexColor;
	vector <Vector3D> vertexNormal;
public:

	Triangle() :Solid() {}
	Triangle(vector <Vector3D> _vertex, vector <Color> _vertexColor, vector <Vector3D> _vertexNormal,
		Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed, Vector3D speed) :
		Solid(coords, color, orient, orientSpeed, speed), vertex(_vertex), vertexColor(_vertexColor), vertexNormal(_vertexNormal) {};
	
	
	
	
	inline vector<Color> getVertexColor() {
		return this->vertexColor;
	}

	inline vector<Vector3D> getVertex() {
		return this->vertex;
	}

	inline vector<Vector3D> getVertexNormal() {
		return this->vertexNormal;
	}

	inline void setVertexCOlor(vector <Color> newColor) {
		this->vertexColor = newColor;
	}
	
	inline void setVertex(vector<Vector3D> newVertex) {
		this->vertex = newVertex;
	}

	inline void setverteNormal(vector<Vector3D> newVertexNormal) {
		this->vertexNormal = newVertexNormal;
	}
	
	void Render();

};

