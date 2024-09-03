#include <iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"


using namespace std;

int main() {

    Fridge f1(10, 20.0);


    cout << f1.get_isOn() << endl;
    cout << f1.getPowerConsumption() << endl;


    return 0;
}