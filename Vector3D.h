#pragma once

class Vector3D
{
private:
	float coordinateX;
	float coordinateY;
	float coordinateZ;

public:
	Vector3D() : coordinateX(0.0), coordinateY(0.0), coordinateZ(0.0) { }

	Vector3D(float x, float y, float z) : coordinateX(x), coordinateY(y), coordinateZ(z) {}

	inline float getCoordinateX() const {
		return this->coordinateX;
	}

	inline float getCoordinateY() const {
		return this->coordinateY;
	}

	inline float getCoordinateZ() const {
		return this->coordinateZ;
	}

	inline void setCoordinateX(const float& coordinateXtoSet) {
		this->coordinateX = coordinateXtoSet;
	}

	inline void setCoordinateY(const float& coordinateYtoSet) {
		this->coordinateY = coordinateYtoSet;
	}

	inline void setCoordinateZ(const float& coordinateZtoSet) {
		this->coordinateZ = coordinateZtoSet;
	}

	Vector3D Add(const Vector3D& vector);
	Vector3D Substract(const Vector3D& vector);
	Vector3D Product(const float& value);
	Vector3D Division(const float& value);
	float DotProduct(const Vector3D& vector);

	Vector3D operator+(const Vector3D& vector);
	Vector3D operator-(const Vector3D& vector);
	Vector3D operator*(const float& vector);
	Vector3D operator/(const float& vector);
	float operator*(const Vector3D& vector);
};

