
#include "Motorbike.h"

Motorbike:: Motorbike(int ID): Vehicle(ID) {
};

int Motorbike:: getParkingDuration() {
    return (difftime(time(NULL),this->timeOfEntry) * 0.85);
};