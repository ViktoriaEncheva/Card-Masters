#include "player.h"

Player::Player() 
{
	HealthPoints = 40;
	CurrentMana = 3;	
}

Player::~Player()
{

}

int Player::getHealth()const {
	return HealthPoints;
}

unsigned int Player::getMana()const {
	return CurrentMana;
}

void Player::setHealth(int h) {
	HealthPoints = h;
}

void Player::setMana(int m) {
	CurrentMana = m;
}

void Player::drawCard()
{

}

void Player::printHand()
{

}