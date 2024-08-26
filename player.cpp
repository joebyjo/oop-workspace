#include "player.h"

Player::Player(string name,int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
};

Player::Player() {
    Player("",0,0);
};


void Player:: attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
};

void Player::takeDamage(int damage) {
    this->health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << endl;
};


string Player::getName() {
    return this->name;
};

int Player::getHealth() {
    return this->health;
};

int Player::getDamage() {
    return this->damage;
};

void Player::setName(string name){
    this-> name = name;
};
void Player::setHealth(int health){
    this-> health = health;
};
void Player::setDamage(int damage){
    this-> damage = damage;
};