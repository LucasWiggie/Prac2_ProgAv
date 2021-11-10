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
	Vector3D newTeapotOrientationSpeed = Vector3D(0, 0.5, 0);

	Teapot* teapot = new Teapot(newTeapotCoords, newTeapotColor, newTeapotOrientation, newTeapotOrientationSpeed, 0.4);
	sceneOne.addGameObject(teapot);

	// CUBE
	Vector3D newCubeCoords = Vector3D(0.8, -0.5, -2);
	Color newCubeColor = Color(0.8, 0.1, 0);
	Vector3D newCubeOrientation = Vector3D(25, 200, 290);
	Vector3D newCubeOrientationSpeed = Vector3D(0.2, 0, 0.2);

	Cube* cube = new Cube(newCubeCoords, newCubeColor, newCubeOrientation, newCubeOrientationSpeed, 0.4);
	sceneOne.addGameObject(cube);

	// SPHERE
	Vector3D newSphereCoords = Vector3D(0, 0.8, -2.3);
	Color newSphereColor = Color(0.5, 0.2, 0.1);
	Vector3D newSphereOrientation = Vector3D();
	Vector3D newSphereOrientationSpeed = Vector3D(0, 0, 0);

	Sphere* sphere = new Sphere(newSphereCoords, newSphereColor, newSphereOrientation, newSphereOrientationSpeed, 0.2, 50, 50);
	sceneOne.addGameObject(sphere);

	// TORUS
	Vector3D newTorusCoords = Vector3D(-0.6, -0.2, -2);
	Color newTorusColor = Color(0, 0.1, 0.5);
	Vector3D newTorusOrientation = Vector3D(20, 45, 0);
	Vector3D newTorusOrientationSpeed = Vector3D(0.1, 0.1, 0.3);

	Torus* torus = new Torus(newTorusCoords, newTorusColor, newTorusOrientation, newTorusOrientationSpeed, 0.05, 0.1, 50, 50);
	sceneOne.addGameObject(torus);

	// CUBOID
	Vector3D newCuboidCoords = Vector3D(-0.9, 0.3, -2);
	Color newCuboidColor = Color(0.3, 0, 0.3);
	Vector3D newCuboidOrientation = Vector3D(120, 0, 30);
	Vector3D newCuboidOrientationSpeed = Vector3D(0.3, 0.1, 0);

	Cuboid* cuboid = new Cuboid(newCuboidCoords, newCuboidColor, newCuboidOrientation, newCuboidOrientationSpeed, 0.5, 0.4, 0.3);
	sceneOne.addGameObject(cuboid);

	// CYLINDER
	Vector3D newCylinderCoords = Vector3D(0.9, 0.5, -2);
	Color newCylinderColor = Color(0, 0.5, 0.7);
	Vector3D newCylinderOrientation = Vector3D(120, 0, 30);
	Vector3D newCylinderOrientationSpeed = Vector3D(0, 0.3, 0);

	Cylinder* cylinder = new Cylinder(newCylinderCoords, newCylinderColor, newCylinderOrientation, newCylinderOrientationSpeed, 0.2, 0.2, 0.4, 50, 50);
	sceneOne.addGameObject(cylinder);

	// CAMERA
	// Camera(Vector3D coords, Color color, Vector3D orientation, Vector3D orientSpeed) : Solid(coords, color, orientation, orientSpeed)
	Vector3D newCameraCoords = Vector3D(1, 3, 3);
	Vector3D newCameraOrientation = Vector3D(45, 0, 90);

	Camera* camera = new Camera(newCameraCoords, Color(0, 0, 0), newCameraOrientation, Vector3D(0, 0, 0));
	sceneOne.addGameObject(camera);
}

void Game::Render() {
	
	sceneOne.Render();

}

void Game::Update() {

	sceneOne.Update();

}