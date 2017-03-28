#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
	this->foo = 3;
	this->bar = 4;
}

Game::~Game()
{

}

Game& Game::getInstance()
{
	static Game instance;
	return instance;
}

void Game::incrFoo()
{
	this->foo *= 2;
}