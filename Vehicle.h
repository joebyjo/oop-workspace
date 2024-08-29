#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <iostream>
using namespace std;


class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        Vehicle();
        int getID();
        virtual int getParkingDuration();
};

#endif