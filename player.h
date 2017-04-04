#ifndef PLAYER_H
#define PLAYER_H
#include"deck.h"

class Player
{
    int HealthPoints;
    unsigned int CurrentMana;
    unsigned const int MaximumMana;
    Deck Deck;
public:
        Player();
        ~Player();

        int getHealth() const;
        unsigned int getMana() const;

        void setHealth(int);
        void setMana(int);


};

#endif // PLAYER_H
