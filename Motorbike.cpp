
#include "Motorbike.h"

Motorbike:: Motorbike(int ID) {
    Vehicle(this->ID);
};

int Motorbike:: getParkingDuration() {
    return (time(NULL) - this->timeOfEntry) * 0.15;
};