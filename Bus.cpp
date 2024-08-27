
#include "Bus.h"

Bus:: Bus(int ID) {
    Vehicle(this->ID);
}

int Bus:: getParkingDuration() {
    return (difftime(time(NULL),this->timeOfEntry) * 0.25);
};