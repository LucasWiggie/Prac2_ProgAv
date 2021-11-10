#include "Solid.h"

void Solid::Update() {
	//rotación = rotación_inicial + velocidad_de_rotación * incremento_de_tiempo;
	this->orientation = this->orientation + this->orientationSpeed * 1;

	//posición = posición_inicial + velocidad * incremento_de_tiempo;
	this->coordinates = this->coordinates + this->speed * 1;
}