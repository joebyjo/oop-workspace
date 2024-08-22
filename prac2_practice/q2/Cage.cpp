
#include <string>

#include "Cage.h"

Cage:: Cage() {
    id=0;
    name="";
};


Cage:: Cage(string name,int id) {
    this->id=id;
    this->name=name;
};


string Cage::getName() {
    return name;
};

int Cage::getDnum() {
    return id;
}

Cage:: ~Cage(){
}
