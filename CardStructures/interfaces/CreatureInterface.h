//
// Created by Lenovo on 3/19/2017.
//



#ifndef CARDMASTERS_CREATUREITERFACE_H
#define CARDMASTERS_CREATUREITERFACE_H


#include "../interfaces/CreatureInterface.h"
#include "../CreatureImplementations/Creature.h"
class CreatureInterface {

protected :
    virtual void attackHero(Hero &hero) = 0;
    virtual void attackCreature(Creature &creature) = 0;
    virtual int getDamage() = 0;
    virtual void setHealth(int health) = 0;
    virtual int getHealth() const = 0;

};


#endif //CARDMASTERS_CREATUREITERFACE_H
