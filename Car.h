#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;


class Car: Vehicle {
    public:
        Car(int ID);
        int getParkingDuration();
        
};

#endif