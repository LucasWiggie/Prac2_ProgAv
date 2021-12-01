#include "Model.h"
#include <GL/glut.h>

void Model::addTriangle(Triangle triangle) {
	this->getTriangleList().push_back(triangle);
};

void Model::clear() {
	triangleList.clear();
};

void Model::paintColor(Color color) {
	for (int i = 0; i < triangleList.size(); i++) {
		for (int j = 0; j < 3; j++) {
			triangleList[i].getVertexColor()[j].setRedComponent(color.getRedComponent());
			triangleList[i].getVertexColor()[j].setGreenComponent(color.getGreenComponent());
			triangleList[i].getVertexColor()[j].setBlueComponent(color.getBlueComponent());
		}
	}
};

void Model::Render() {

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());
	glRotatef(this->getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(this->getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(this->getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	//Por cada(Triangulo t en triángulos) t.Render();
	for (int i = 0; i < triangleList.size(); i++)
	{
		triangleList[i].Render();
	}
	glPopMatrix();

}
