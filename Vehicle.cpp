
#include "Vehicle.h"


Vehicle:: Vehicle(int ID){
    timeOfEntry = time(nullptr);
    this->ID = ID;
};

Vehicle:: Vehicle(){
    Vehicle(0);
};

int Vehicle:: getParkingDuration() {
    return difftime(time(nullptr),this->timeOfEntry);
};

int Vehicle::getID() {
    return ID;
};