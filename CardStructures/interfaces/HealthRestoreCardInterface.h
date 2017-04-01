//
// Created by Lenovo on 3/19/2017.
//

#ifndef CARDMASTERS_HEALTHRESTORECARDINTERFACE_H
#define CARDMASTERS_HEALTHRESTORECARDINTERFACE_H



#include "../CreatureImplementations/Creature.h"

using std::string
class HealthRestoreCardInterface {
protected:
    virtual void restoreHealthToCreature(Creature &creature) = 0;
    virtual void restoreHealthToHero(Hero &hero) = 0;
};


#endif //CARDMASTERS_HEALTHRESTORECARDINTERFACE_H
