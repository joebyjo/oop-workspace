
#include "Bus.h"

Bus:: Bus(int ID) {
    Vehicle(ID);
}

int Bus:: getParkingDuration() {
    return (time(NULL) - this->timeOfEntry) * 0.25;
};