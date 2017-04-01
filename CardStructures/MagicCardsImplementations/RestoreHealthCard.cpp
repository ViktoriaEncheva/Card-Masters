//
// Created by Lenovo on 3/19/2017.
//

#include <iostream>
#include "RestoreHealthCard.h"

using std::cout

RestoreHealthCard::RestoreHealthCard
        (const string &name, int manaCost, const string &info, const int &restoreHealth) :
        AbstractCard(name, manaCost, info) {
    this->restoreHealth = restoreHealth;
}

void RestoreHealthCard::restoreHealthToHero(Hero &hero) {
    hero.setHealth(hero.getHealth() + this->restoreHealth);

    cout << hero->getName + "now has " + restoreHealth + " more health!";
}

void RestoreHealthCard::restoreHealthToCreature(Creature &creature) {
    creature.setHealth(creature.getHealth() + this->restoreHealth);

    cout << creature.getName() << " now has " << restoreHealth + " more!";

}
