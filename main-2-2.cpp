#include <iostream>

#include "Appliance.h"
#include "TV.h"

using namespace std;

int main() {

    TV t1(10, 20.0);


    cout << t1.get_isOn() << endl;
    cout << t1.getPowerConsumption() << endl;


    return 0;
}