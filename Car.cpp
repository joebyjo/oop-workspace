
#include "Car.h"

Car:: Car(int ID): Vehicle(ID) {
}

int Car:: getParkingDuration() {
    return (Vehicle::getParkingDuration()*0.9);
};