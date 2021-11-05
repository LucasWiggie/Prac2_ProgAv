#pragma once
#include "Vector3D.h"
#include "Color.h"

class Solid
{
private:
	Vector3D coordinates;
	Color colorCoords;
	Vector3D orientation;
	Vector3D orientationSpeed;

public:
	Solid() : coordinates(), colorCoords(), orientation(), orientationSpeed(){}
	Solid(Vector3D coords, Color color, Vector3D orient, Vector3D orientSpeed) : coordinates(coords), colorCoords(color), orientation(orient), orientationSpeed(orientSpeed) {}

	inline Vector3D getCoordinates() const {
		return this->coordinates;
	}

	inline Color getColor() const {
		return this->colorCoords;
	}

	inline Vector3D getOrientation() const {
		return this->orientation;
	}

	inline Vector3D getOrientationSpeed() const {
		return this->orientationSpeed;
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

	inline void setOrientationSpeed(Vector3D newOrientationSpeed) {
		this->orientationSpeed.setCoordinateX(newOrientationSpeed.getCoordinateX());
		this->orientationSpeed.setCoordinateY(newOrientationSpeed.getCoordinateY());
		this->orientationSpeed.setCoordinateZ(newOrientationSpeed.getCoordinateZ());
	}

	virtual void Render() = 0;
	virtual void Update();
};

