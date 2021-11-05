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
	
	sceneOne.addGameObject();
}

void Game::Render() {
	
	sceneOne.Render();

}

void Game::Update() {

}