//
// Created by Lenovo on 3/19/2017.
//

#ifndef CARDMASTERS_DEALDAMAGECARD_H
#define CARDMASTERS_DEALDAMAGECARD_H


#include "../interfaces/HealthRestoreCardInterface.h"
#include "../interfaces/DamageDealCardInterface.h"

class DealDamageCard : public DamageDealCardInterface,AbstractCard{
private: int damageDeal;
public:
    DealDamageCard(const string &name, int manaCost, const string &info, const int& damageDeal );

protected:
    virtual void dealDamageToHero(Hero &hero) override;

    virtual void dealDamageToACreature(Creature &creature);
};


#endif //CARDMASTERS_DEALDAMAGECARD_H
