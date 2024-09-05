

#include "Tesla.h"


Tesla:: Tesla(){
    this->price = 0;
    this->emissions = 0;
    this->model = 0;  // keep note
    this->batteryPercentage = 100;
};    


Tesla:: Tesla(char model, int price): Car(price), model(model), batteryPercentage(100){
};

void Tesla:: chargeBattery(int mins) {
    this->batteryPercentage += (mins * 0.005);

    if (batteryPercentage>=100) {
        this->batteryPercentage = 100;
    }
};   


void Tesla::drive(int kms) {
    // come back
};  









float Tesla::get_batteryPercentage() {
    return batteryPercentage;
};
char Tesla::get_model(){
    return model;
};
void Tesla::set_batteryPercentage(float batteryPercentage){

    if (batteryPercentage>=100) {
        this->batteryPercentage = 100;
    } else if (batteryPercentage<=0) {
        this->batteryPercentage = 0;
    } else {
        this->batteryPercentage = batteryPercentage;
    }

};

void Tesla::set_model(char model) {
    this->model = model;
};