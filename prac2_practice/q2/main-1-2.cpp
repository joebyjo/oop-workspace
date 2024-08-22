#include <iostream>
#include "Clinic.h"
#include "Cage.h"

int main() {
    // Test default constructor
    Clinic defaultClinic;
    std::cout << "Default Clinic - Name: " << defaultClinic.getName() << ", Number of Cages: " << defaultClinic.getNumber_of_cages() << std::endl;

    // Test parameterized constructor
    Clinic customClinic("Healthy Paws", 3);
    std::cout << "Custom Clinic - Name: " << customClinic.getName() << ", Number of Cages: " << customClinic.getNumber_of_cages() << std::endl;

    // Create some Cage objects
    Cage cage1("Fluffy", 201);
    Cage cage2("Whiskers", 202);
    Cage cage3("Rover", 203);
    Cage cage4("Rover", 203);

    // Test adding cages
    if (customClinic.addCage(cage1)) {
        std::cout << "Added Cage - Name: " << cage1.getName() << ", ID: " << cage1.getDnum() << std::endl;
    } else {
        std::cout << "Failed to add Cage - Name: " << cage1.getName() << ", ID: " << cage1.getDnum() << std::endl;
    }

    if (customClinic.addCage(cage2)) {
        std::cout << "Added Cage - Name: " << cage2.getName() << ", ID: " << cage2.getDnum() << std::endl;
    } else {
        std::cout << "Failed to add Cage - Name: " << cage2.getName() << ", ID: " << cage2.getDnum() << std::endl;
    }

    if (customClinic.addCage(cage3)) {
        std::cout << "Added Cage - Name: " << cage3.getName() << ", ID: " << cage3.getDnum() << std::endl;
    } else {
        std::cout << "Failed to add Cage - Name: " << cage3.getName() << ", ID: " << cage3.getDnum() << std::endl;
    }

    if (customClinic.addCage(cage4)) {
        std::cout << "Added Cage - Name: " << cage3.getName() << ", ID: " << cage3.getDnum() << std::endl;
    } else {
        std::cout << "Failed to add Cage - Name: " << cage3.getName() << ", ID: " << cage3.getDnum() << std::endl;
    }

    // Check the number of cages after adding
    std::cout << "Number of Cages in Clinic: " << customClinic.getNumber_of_cages() << std::endl;

    return 0;
}
