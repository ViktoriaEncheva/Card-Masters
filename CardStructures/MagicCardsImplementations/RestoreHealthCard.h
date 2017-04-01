//
// Created by Lenovo on 3/19/2017.
//

#ifndef CARDMASTERS_RESTOREHEALTHCARD_H
#define CARDMASTERS_RESTOREHEALTHCARD_H


#include "../AbstractCard.h"
#include "../interfaces/HealthRestoreCardInterface.h"

class RestoreHealthCard : public AbstractCard,HealthRestoreCardInterface {
private:
    int restoreHealth;
public:
    RestoreHealthCard(const string &name, int manaCost, const string &info, const int &restoreHealth);

    virtual void restoreHealthToCreature(Creature &creature);

    virtual void restoreHealthToHero(Hero &hero);
};


#endif //CARDMASTERS_RESTOREHEALTHCARD_H
