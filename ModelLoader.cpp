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
	
	this->maxX = fmax(this->maxX, vertex.getCoordinateX());
	this->maxY = fmax(this->maxY, vertex.getCoordinateY());
	this->maxZ = fmax(this->maxZ, vertex.getCoordinateZ());
	this->minX = fmax(this->minX, vertex.getCoordinateX());
	this->minY = fmax(this->minY, vertex.getCoordinateY());
	this->minZ = fmax(this->minZ, vertex.getCoordinateZ());
	
}

// REPASAAAAAAR!!!!!! *Duda Foro
Triangle ModelLoader :: center(Triangle triangle) {

	float xCenter = (this->minX + this->getWidth()) / 2.0;
	float yCenter = (this->minY + this->getHeight()) / 2.0;
	float zCenter = (this->minZ + this->getLength()) / 2.0;
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

Vector3D ModelLoader :: parseObjLineToVector3D(const string& line) {
	string typeOfPoint;
	float xCoordinate, yCoordinate, zCoordinate;
	istringstream stringStream(line);
	stringStream >> typeOfPoint >> xCoordinate >> yCoordinate >> zCoordinate;
	Vector3D vectorPoint(xCoordinate, yCoordinate, zCoordinate);
	return vectorPoint * this->getScale();
}


// REPASAAAAAAR!!!!!! *Duda Foro
Triangle ModelLoader::parseObjTriangle(const string& line) {
	char c;
	int idxVertex0, idxVertex1, idxVertex2;
	int idxNormal0, idxNormal1, idxNormal2;

	istringstream stringStream(line);
	stringStream >> c; 
	stringStream >> idxVertex0 >> c >> c >> idxNormal0;
	stringStream >> idxVertex1 >> c >> c >> idxNormal1;
	stringStream >> idxVertex2 >> c >> c >> idxNormal2;

	Vector3D vertex0 = this->vertexList[idxVertex0 - 1];
	Vector3D vertex1 = this->vertexList[idxVertex1 - 1];
	Vector3D vertex2 = this->vertexList[idxVertex2 - 1];
	Vector3D normal = this->normalList[idxNormal0 - 1];

	vector<Vector3D> newVertex;
	newVertex.push_back(vertex0);
	newVertex.push_back(vertex1);
	newVertex.push_back(vertex2);

	vector<Vector3D> newNormal;
	newNormal.push_back(normal);
	newNormal.push_back(normal);
	newNormal.push_back(normal);

	Triangle parsedTriangle = Triangle();
	parsedTriangle.setVertex(newVertex);
	parsedTriangle.setVertexNormal(newNormal);

	return parsedTriangle;
}

void ModelLoader::loadModel(const string& filePath) {
	try {
		ifstream objFile(filePath);
		
		if (objFile.is_open()) {

			string line;
			int count = 0;
			
			while (getline(objFile, line)) {
				if (line[0] == 'v' && line[1] == 'n') {
					Vector3D normal = this->parseObjLineToVector3D(line);
					this->normalList.push_back(normal);
				}
				else if (line[0] == 'v') {
					Vector3D vertex = this->parseObjLineToVector3D(line);
					this->calcBoundaries(vertex);
					this->vertexList.push_back(vertex);
				}
				else if (line[0] == 'f') {
					Triangle triangle = this->parseObjTriangle(line);
					this->model.addTriangle(this->center(triangle));
				}
			}

			objFile.close();

		}
		else {
			cout << "No se ha podido abir el archivo: " << filePath << endl;
		}

	}
	catch (exception& ex) {
		cout << "Excepcion al procesar el archivo: " << filePath << endl;
		cout << ex.what() << endl;
	}
}