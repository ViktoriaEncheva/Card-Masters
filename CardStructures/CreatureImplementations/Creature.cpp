//
// Created by Lenovo on 3/19/2017.
//

#include <iostream>
#include "Creature.h"

Creature::Creature(const string &name, int manaCost, const string &info,const int damage, const int health) : AbstractCard(name, manaCost, info) {
    this->damage = damage;
    this->health = health;
}

int Creature::getDamage() {
    return this->damage;
}

void Creature::setHealth(int health) {
    this->health = health;
}

int Creature::getHealth() const {
    return health;
}

void Creature::attackHero(Hero &hero) {
hero->setHealth(hero.getHealth()-this->getDamage());
cout << hero.getName() << " took " << this->getDamage() << "damage!";
}

void Creature::attackCreature(Creature &creature) {
    creature.setHealth(creature.getHealth()  - this->getDamage());
    cout << creature.getName() << " took " << this->getDamage() << "damage!";
}

