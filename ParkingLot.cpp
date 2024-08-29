
#include "ParkingLot.h"

ParkingLot:: ParkingLot(int max_capacity) {
        this->max_capacity=max_capacity;
        current_count=0;
        vehicles= new Vehicle[max_capacity];
}

ParkingLot:: ParkingLot() {
        this->max_capacity=0;
        current_count=0;
        vehicles= nullptr;
}

int ParkingLot::getCount() {
    return current_count;
};

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (current_count < max_capacity) {
        vehicles[current_count] = *vehicle;
        current_count++;
    } else {
        cout << "The lot is full" << endl;
    }
};

void ParkingLot::unparkVehicle(int ID) {

    Vehicle* temp = new Vehicle[max_capacity];
    int counter = 0;
    for (int i=0; i<current_count; i++) {
        if (vehicles[i].getID() != ID) {
            temp[counter] = vehicles[i];
            counter++;
        }


        // add all of non-if to temp, free up vehicles, realloc vehicles, add elements to vehicles. change current_count
    }

    if (counter == current_count) {
    cout << "Vehicle not in the lot" << endl;
    }

    current_count = counter;
    delete[] vehicles;
    vehicles = temp;  
    
};


ParkingLot:: ~ParkingLot() {
    delete[] vehicles;
};