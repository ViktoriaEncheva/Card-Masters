//
// Created by Lenovo on 3/19/2017.
//

#ifndef CARDMASTERS_CREATURECLASS_H
#define CARDMASTERS_CREATURECLASS_H


#include "../AbstractCard.h"
#include "../interfaces/CreatureInterface.h"

class Creature : public AbstractCard,CreatureInterface {
private:
    int damage;
    int health;
public:
    Creature(const string &name, int manaCost, const string &info, const int damage, const int health);

    virtual void attackHero(Hero *hero);

    virtual void attackCreature(Creature &creature);

    virtual int getDamage();

    virtual int getHealth();

    virtual void setHealth(int health);

    virtual int getHealth() const;

};


#endif //CARDMASTERS_CREATURECLASS_H
