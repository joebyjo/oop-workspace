
#include "Appliance.h"


Appliance:: Appliance(int powerRating) {
    this->powerRating = powerRating;
    isOn = false;
};

Appliance:: Appliance() {
    this->powerRating = 0;
    isOn = false;
};

void Appliance:: turnOn(){
    this->isOn = true;
};

void Appliance:: turnOff(){
    this->isOn = false;
};

int Appliance:: getPowerConsumption(){
    return 0;
};

int Appliance:: get_powerRating() {
    return powerRating;
};

bool Appliance:: get_isOn() {
    return isOn;
};

void Appliance:: set_powerRating(int powerRating) {
    this->powerRating = powerRating;
};

void Appliance:: set_isOn(bool isOn) {
    this->isOn = isOn;
};






