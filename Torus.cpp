#include "Torus.h"

void Torus::Render() {
	glPushMatrix();
	glTranslatef(getCoordinates().getCoordinateX(), getCoordinates().getCoordinateY(), getCoordinates().getCoordinateZ());
	glColor3f(getColor().getRedComponent(), getColor().getGreenComponent(), getColor().getBlueComponent());
	glRotatef(getOrientation().getCoordinateX(), 1.0, 0.0, 0.0);
	glRotatef(getOrientation().getCoordinateY(), 0.0, 1.0, 0.0);
	glRotatef(getOrientation().getCoordinateZ(), 0.0, 0.0, 1.0);
	glutSolidTorus(innerRadius, outerRadius, faces, rings);
	glPopMatrix();
}
