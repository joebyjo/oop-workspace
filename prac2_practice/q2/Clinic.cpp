#include "Clinic.h"

Clinic:: Clinic(){
    name = "";
    max_cages=0;
    current_cages=0;
    array=nullptr;
}

Clinic:: Clinic(string name, int max_size){
    this->name = name;
    this->max_cages=max_size;
    current_cages=0;
    array=new Cage[max_size];
}

int Clinic::getNumber_of_cages(){
    return this->current_cages;
};

string Clinic::getName(){
    return this->name;
};

Cage* Clinic::getCages(){
    return this->array;
};

bool Clinic::addCage(Cage new_cage){
    
    if (this->current_cages!=this->max_cages) {
        array[this->current_cages] = new_cage;
        current_cages++;
        return true;
    }
    return false;
};

Clinic:: ~Clinic(){
    delete[] array;
};