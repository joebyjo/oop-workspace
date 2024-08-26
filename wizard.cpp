#include "wizard.h"

Wizard::Wizard(string name,int health, int damage, int mana){
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->mana = mana;
};

Wizard::Wizard() {
    Wizard("",0,0,0);
};

void Wizard:: castSpell(Player* opponent) {
    opponent->takeDamage(this->mana);
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";

};
