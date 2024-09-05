#include <iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"


using namespace std;

int main() {

    House h1(3);

    h1.addAppliance(new Appliance(200));
    h1.addAppliance(new Fridge(200,300));
    h1.addAppliance(new TV(200,42));


    cout << h1.getTotalPowerConsumption() << endl;


    return 0;
}