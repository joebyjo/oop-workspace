
#include "Car.h"

Car:: Car(int ID) {
    Vehicle(this->ID);
}

int Car:: getParkingDuration() {
    return (difftime(time(NULL),this->timeOfEntry) * 0.1);
};