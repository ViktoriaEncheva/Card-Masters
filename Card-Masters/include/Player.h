#ifndef PLAYER_H
#define PLAYER_H
#include"deck.h"

class Player
{
	private:
		int HealthPoints;
		unsigned int CurrentMana;
		unsigned const int MaximumMana = 11;
		Deck Deck;

	public:
		Player();
		~Player();

		int getHealth() const;
		unsigned int getMana() const;

		void setHealth(int);
		void setMana(int);

		void drawCard();
		void printHand();
};

#endif // PLAYER_H