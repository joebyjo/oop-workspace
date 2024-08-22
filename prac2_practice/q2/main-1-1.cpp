#include <iostream>
#include "Cage.h"

int main() {
    // Test default constructor
    Cage defaultCage;
    std::cout << "Default Cage - Name: " << defaultCage.getName() << ", ID: " << defaultCage.getDnum() << std::endl;

    // Test parameterized constructor
    Cage customCage("Buddy", 101);
    std::cout << "Custom Cage - Name: " << customCage.getName() << ", ID: " << customCage.getDnum() << std::endl;

    // Test getters
    std::string occupantName = customCage.getName();
    int idNumber = customCage.getDnum();
    std::cout << "Occupant Name: " << occupantName << ", ID Number: " << idNumber << std::endl;

    return 0;
}
