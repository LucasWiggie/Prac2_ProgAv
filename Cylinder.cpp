#include "Cylinder.h"
#include <GL/glut.h>

void Cylinder::Render() {

	GLUquadricObj* quadricTemp = gluNewQuadric();

	glPushMatrix();
	glTranslatef(this->getCoordinates().getCoordinateX(), this->getCoordinates().getCoordinateY(), this->getCoordinates().getCoordinateZ());
	glColor3f(this->getColor().getRedComponent(), this->getColor().getGreenComponent(), this->getColor().getBlueComponent());
	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	gluCylinder(quadricTemp, getBaseRadius(), getTopRadius(), getHeight(), getSlices(), getStacks());
	glPopMatrix();
	gluDeleteQuadric(quadricTemp);


}