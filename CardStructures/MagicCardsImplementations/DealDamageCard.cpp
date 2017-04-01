//
// Created by Lenovo on 3/19/2017.
//

#include "DealDamageCard.h"

DealDamageCard::DealDamageCard(const string &name, int manaCost, const string &info,const int& damageDeal) : AbstractCard(name, manaCost,
                                                                                                    info) {
    this->damageDeal = damageDeal;
}

void DealDamageCard::dealDamageToHero(Hero &hero) {
hero.setHealth(hero.getHealth() - this->damageDeal);
}

void DealDamageCard::dealDamageToACreature(Creature &creature) {
    creature.setHealth(creature.getHealth() - damageDeal);
}
