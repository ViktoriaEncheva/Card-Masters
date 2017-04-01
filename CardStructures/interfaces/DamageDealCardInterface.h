//
// Created by Lenovo on 3/19/2017.
//

#ifndef CARDMASTERS_DAMAGEDEALCARDINTERFACE_H
#define CARDMASTERS_DAMAGEDEALCARDINTERFACE_H

#include <array>

#include "../CreatureImplementations/Creature.h"

using std::string;

class DamageDealCardInterface {
protected:
    virtual void dealDamageToHero(Hero &hero) = 0;
    virtual void dealDamageToACreature(Creature &creature) = 0;

};


#endif //CARDMASTERS_DAMAGEDEALCARDINTERFACE_H
