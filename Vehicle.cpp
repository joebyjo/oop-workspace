
#include "Vehicle.h"

Vehicle:: Vehicle(int ID){
    timeOfEntry = time(NULL);
    this->ID = ID;
};

Vehicle:: Vehicle(){
    Vehicle(0);
};

int Vehicle::getID() {
    return ID;
};