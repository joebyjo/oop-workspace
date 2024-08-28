#ifndef MOTORBIKE_H
#define BUS_H

#include "Vehicle.h"
using namespace std;


class Motorbike: public Vehicle {
    public:
        Motorbike(int ID);
        int getParkingDuration();
        
};

#endif