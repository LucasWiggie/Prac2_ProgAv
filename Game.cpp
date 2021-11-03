#include "Game.h"
#include <iostream>
using namespace std;

void Game::ProcessKeyPressed(unsigned char key, int px, int py) {
	cout << "Tecla pulsada: " << key << endl;
}

void Game::ProcessMouseMovement(int x, int y) {
	cout << "Movimiento del mouse: " << x << "," << y << endl;
}

void Game::ProcessMouseClick(int button, int state, int x, int y) {
	cout << "Clic: " << button << endl;
}

void Game::Init() {
	
	// TEAPOT
	Vector3D newTeapotCoords = Vector3D(0, 0, -2);
	Color newTeapotColor = Color(0, 0.2, 0);
	Vector3D newTeapotOrientation = Vector3D(45, 180, 45);

	Teapot* teapot = new Teapot(newTeapotCoords, newTeapotColor, newTeapotOrientation, 0.4);
	this->gameObjects.push_back(teapot);

	// CUBE
	Vector3D newCubeCoords = Vector3D(0.8, -0.5, -2);
	Color newCubeColor = Color(0.8, 0.1, 0);
	Vector3D newCubeOrientation = Vector3D(25, 200, 290);

	Cube* cube = new Cube(newCubeCoords, newCubeColor, newCubeOrientation, 0.4);
	this->gameObjects.push_back(cube);

	// SPHERE
	Vector3D newSphereCoords = Vector3D(0, 0.7, -2);
	Color newSphereColor = Color(0.5, 0.2, 0.1);
	Vector3D newSphereOrientation = Vector3D();

	Sphere* sphere = new Sphere(newSphereCoords, newSphereColor, newSphereOrientation, 0.2, 50, 50);
	this->gameObjects.push_back(sphere);

	// TORUS
	Vector3D newTorusCoords = Vector3D(-0.6, -0.2, -2);
	Color newTorusColor = Color(0, 0.1, 0.5);
	Vector3D newTorusOrientation = Vector3D(20, 45, 0);

	Torus* torus = new Torus(newTorusCoords, newTorusColor, newTeapotOrientation, 0.05, 0.1, 50, 50);
	this->gameObjects.push_back(torus);

	// CUBOID
	Vector3D newCuboidCoords = Vector3D(-0.9, 0.3, -2);
	Color newCuboidColor = Color(0.3, 0, 0.3);
	Vector3D newCuboidOrientation = Vector3D(120, 0, 30);

	Cuboid* cuboid = new Cuboid(newCuboidCoords, newCuboidColor, newCuboidOrientation, 0.5, 0.4, 0.3);
	this->gameObjects.push_back(cuboid);

	// CYLINDER
	Vector3D newCylinderCoords = Vector3D(0.9, 0.5, -2);
	Color newCylinderColor = Color(0, 0.5, 0.7);
	Vector3D newCylinderOrientation = Vector3D(120, 0, 30);

	Cylinder* cylinder = new Cylinder(newCylinderCoords, newCylinderColor, newCylinderOrientation, 0.2, 0.2, 0.4, 50 , 50);
	this->gameObjects.push_back(cylinder);

}

void Game::Render() {

	for (int i = 0; i < this->gameObjects.size(); i++) {
		gameObjects[i]->Render();
	}

	/*this->GetTeapot().Render();
	this->GetCube().Render();
	this->GetSphere().Render();
	this->GetTorus().Render();
	this->GetCuboid().Render();
	this->GetCylinder().Render();*/
}

void Game::Update() {

}