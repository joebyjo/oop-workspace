#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"
using namespace std;


class Motorbike: Vehicle {
    public:
        Motorbike(int ID);
        int getParkingDuration();
        
};

#endif