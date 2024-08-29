#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
    private:
        int max_capacity;
        int current_count;
        Vehicle* vehicles;

    public:
        ParkingLot(int max_capacity);
        ParkingLot();
        int getCount();
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int ID);
        ~ParkingLot();

};

#endif