#include "warrior.h"

Warrior:: Warrior(string name,int health, int damage, string weapon) {
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->weapon = weapon;
};

Warrior::Warrior() {
    Warrior("",0,0,"");
};

void Warrior:: swingWeapon(Player* opponent) {
    opponent->takeDamage(this->damage);
    cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
};
