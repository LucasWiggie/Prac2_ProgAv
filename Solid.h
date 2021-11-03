#pragma once
#include "Vector3D.h"
#include "Color.h"

class Solid
{
private:
	Vector3D coordinates;
	Color colorCoords;
	Vector3D orientation;

public:
	Solid() : coordinates(), colorCoords(), orientation(){}
	Solid(Vector3D coords, Color color, Vector3D orient) : coordinates(coords), colorCoords(color), orientation(orient) {}

	inline Vector3D getCoordinates() const {
		return this->coordinates;
	}

	inline Color getColor() const {
		return this->colorCoords;
	}

	inline Vector3D getOrientation() const {
		return this->orientation;
	}

	inline void setCoordinates(Vector3D newCoordinates) {
		this->coordinates.setCoordinateX(newCoordinates.getCoordinateX());
		this->coordinates.setCoordinateY(newCoordinates.getCoordinateY());
		this->coordinates.setCoordinateZ(newCoordinates.getCoordinateZ());
	}

	inline void setColor(Color newColor) {
		this->colorCoords.setRedComponent(newColor.getRedComponent());
		this->colorCoords.setGreenComponent(newColor.getGreenComponent());
		this->colorCoords.setBlueComponent(newColor.getBlueComponent());
	}

	inline void setOrientation(Vector3D newOrientation) {
		this->orientation.setCoordinateX(newOrientation.getCoordinateX());
		this->orientation.setCoordinateY(newOrientation.getCoordinateY());
		this->orientation.setCoordinateZ(newOrientation.getCoordinateZ());
	}

	virtual void Render() = 0;
};

