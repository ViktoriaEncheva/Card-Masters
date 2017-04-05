#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
	this->turnIndicator = rand() % 2; // random players starts first	
}

Game::~Game()
{

}

Game& Game::getInstance()
{
	static Game instance;
	return instance;
}

bool Game::isOver() const
{
	bool plr1IsDead = this->plr1.getHealth() == 0;
	bool plr2IsDead = this->plr2.getHealth() == 0;
	return plr1IsDead || plr2IsDead;
}

void Game::printField() const
{
	cout << "printed field" << endl;
}

void Game::turn()
{
	// use alias "plr" to avoid code repetition
	Player& plr = this->turnIndicator ? this->plr1 : this->plr2;
	
	int i = this->turnIndicator ? 1 : 2;
	cout << "Player " << i << "'s turn" << endl;
	cout << "Player " << i << " draws a card" << endl;
	cout << "turn indicator: " << this->turnIndicator << endl;
	cout << endl << " --- " << endl << endl;
	plr.drawCard();
	plr.printHand();
	this->printField();
	this->turnIndicator = !this->turnIndicator; // end of turn

	//this->plr1.setHealth(this->plr1.getHealth() - 10);
}

void Game::run()
{
	while (!this->isOver())
	{		
		this->turn();
		break;
	}
}