#include "player.h"
#include"deck.h"
Player::Player(){

    HealthPoints = 40;
    CurrentMana = 3;
    MaximumMana = 11;
}
Player::getHealth()const {
    return HealthPoints;
}
Player::getMana()const {
    return CurrentMana;
}
Player::setHealth(int h){
    HealthPoints = h;
}
Player::setMana(int m){
    CurrentMana = m;
}
Player::~Player(){

}
