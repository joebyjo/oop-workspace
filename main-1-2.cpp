#include <iostream>

#include "Vehicle.h" 
#include "Car.h"     
#include "Motorbike.h" 
#include "ParkingLot.h"

using namespace std;

int main() {
    // Create a ParkingLot object with a maximum capacity of 10
    ParkingLot parkingLot(10);

    string type;
    int id;
    bool exit = false;
    
    // Loop to keep prompting the user to park vehicles until the lot is full
    while (!exit) {
        cout << "Enter the type of vehicle to park (Car/Motorcycle) or 'exit' to stop: ";
        cin >> type;

        if (type == "exit") {
            break;
        }

        cout << "Enter the ID of the vehicle: ";
        cin >> id;

        Vehicle* vehicle = nullptr;  // Pointer to Vehicle

        // Create the appropriate vehicle object based on user input
        if (type == "Car") {
            vehicle = new Car(id);
        } else if (type == "Motorcycle") {
            vehicle = new Motorbike(id);
        } else {
            cout << "Invalid vehicle type. Please enter 'Car' or 'Motorcycle'." << endl;
            continue;
        }

        // Attempt to park the vehicle
        parkingLot.parkVehicle(vehicle);

        // Check if the parking lot is full
    }

    // Prompt the user to unpark a vehicle
    cout << "Enter the ID of the vehicle to unpark: ";
    cin >> id;

    // Attempt to unpark the vehicle
    parkingLot.unparkVehicle(id);

    return 0;
}
