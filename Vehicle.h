#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;


class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle(int ID);
        Vehicle();
        int getID();
};

#endif