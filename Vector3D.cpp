#include "Vector3D.h"

Vector3D Vector3D :: Add(const Vector3D& vector) {
	return *this + vector;
}

Vector3D Vector3D :: Substract(const Vector3D& vector) {
	return *this - vector;
}

Vector3D Vector3D :: Product(const float& value) {
	return *this * value;
}

Vector3D Vector3D :: Division(const float& value) {
	return *this / value;
}

float Vector3D :: DotProduct(const Vector3D& vector) {
	return *this * vector;
}

Vector3D Vector3D :: operator+(const Vector3D& vector) {
	float x = coordinateX + vector.coordinateX;
	float y = coordinateY + vector.coordinateY;
	float z = coordinateZ + vector.coordinateZ;

	Vector3D newVect(x, y, z);
	return newVect;
}

Vector3D Vector3D :: operator-(const Vector3D& vector) {
	float x = coordinateX - vector.coordinateX;
	float y = coordinateY - vector.coordinateY;
	float z = coordinateZ - vector.coordinateZ;

	Vector3D newVect(x, y, z);
	return newVect;
}

Vector3D Vector3D :: operator*(const float& value) {
	float x = coordinateX * value;
	float y = coordinateY * value;
	float z = coordinateZ * value;

	Vector3D newVect(x, y, z);
	return newVect;
}

Vector3D Vector3D :: operator/(const float& value) {
	float x = coordinateX / value;
	float y = coordinateY / value;
	float z = coordinateZ / value;

	Vector3D newVect(x, y, z);
	return newVect;
}

float Vector3D :: operator*(const Vector3D& vector) {
	float x = coordinateX * vector.coordinateX;
	float y = coordinateY * vector.coordinateY;
	float z = coordinateZ * vector.coordinateZ;

	return x + y + z;
}