#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
using namespace std;


class Bus: Vehicle {
    public:
        Bus(int ID);
        int getParkingDuration();
        
};

#endif