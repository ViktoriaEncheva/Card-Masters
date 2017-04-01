//
// Created by Lenovo on 3/19/2017.
//
#include <array>

using namespace std;
#ifndef CARDMASTERS_CARD_H
#define CARDMASTERS_CARD_H


class AbstractCard {
private:
    string name;
    int manaCost;
    string info;
public:
    AbstractCard(const string &name, int manaCost,const string &info);
    const string &getName() const;
    int getManaCost() const;
    string getInfo();


};


#endif //CARDMASTERS_CARD_H
