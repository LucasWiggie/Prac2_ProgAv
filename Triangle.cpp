#include "Triangle.h"
#include <GL/glut.h>
void Triangle::Render() {
	glBegin(GL_TRIANGLES);

	for (int i = 0; i < 3; i++) {
		//recorremos el vector ejecutando cada vértice
		glColor3f(getVertexColor()[i].getBlueComponent(), getVertexColor()[i].getGreenComponent(), getVertexColor()[i].getRedComponent());
		glNormal3f(getVertexNormal()[i].getCoordinateX(), getVertexNormal()[i].getCoordinateY(), getVertexNormal()[i].getCoordinateZ());
		glVertex3f(getVertex()[i].getCoordinateX(), getVertex()[i].getCoordinateY(), getVertex()[i].getCoordinateZ());
	}
	glEnd();

}