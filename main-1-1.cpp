
#include <iostream>

#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {

    int n;
    Car v(2);
    
    cout << "Enter Number of cars: ";
    cin >> n;
    cout << v.getParkingDuration() << endl;

    
    return 0;
}