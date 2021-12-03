#include "Triangle.h"
#include <GL/glut.h>

void Triangle::Render() {
	glBegin(GL_TRIANGLES);

	for (int i = 0; i < 3; i++) {
		//recorremos el vector ejecutando cada vértice
		glColor3f(getVertexColor()[i].getRedComponent(), getVertexColor()[i].getGreenComponent(), getVertexColor()[i].getBlueComponent());
		glNormal3f(getVertexNormal()[i].getCoordinateX(), getVertexNormal()[i].getCoordinateY(), getVertexNormal()[i].getCoordinateZ());
		glVertex3f(getVertex()[i].getCoordinateX(), getVertex()[i].getCoordinateY(), getVertex()[i].getCoordinateZ());
	}

	glEnd();

}