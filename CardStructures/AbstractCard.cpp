//
// Created by Lenovo on 3/19/2017.
//

#include "AbstractCard.h"

AbstractCard::AbstractCard(const string &name, int manaCost,const string &info){
    this->name = name;
    this->manaCost = manaCost;
    this->info = info;
}

const string &AbstractCard::getName() const {
    return this->name;
}

int AbstractCard::getManaCost() const {
    return this->manaCost;
}

string AbstractCard::getInfo() {
    return this->info;
}
