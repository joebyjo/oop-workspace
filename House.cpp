
#include "House.h"

House:: House() {
    numAppliances=0;
    current_count=0;
    appliances=nullptr;
}

House:: House(int numAppliances){
    this->numAppliances=numAppliances;
    current_count=0;
    appliances=new Appliance* [numAppliances];
};


bool House:: addAppliance(Appliance* appliance){

    if (current_count<=numAppliances) {
        appliances[current_count] = appliance;
        current_count++;
        return true;
    }

    return false;

};

double House:: getTotalPowerConsumption(){
    double total = 0;

    for (int i=0; i<current_count; i++) {
        total+= appliances[i]->getPowerConsumption();
    }

    return total;
};

House:: ~House() {
    for (int i=0; i<current_count; i++) {
        delete appliances[i];
    }

    delete[] appliances;
}

