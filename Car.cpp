
#include "Car.h"

Car:: Car(int ID): Vehicle(ID) {
}

int Car:: getParkingDuration() {
    return (difftime(time(nullptr),this->timeOfEntry)*0.1);
};