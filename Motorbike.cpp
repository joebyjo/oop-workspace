
#include <Motorbike.h>

Motorbike:: Motorbike(int ID) {
    Vehicle(ID);
}

int Motorbike:: getParkingDuration() {
    return (time(NULL) - this->timeOfEntry) * 0.15;
};