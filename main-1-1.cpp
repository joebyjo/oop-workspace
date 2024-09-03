#include <iostream>

#include "Appliance.h"

using namespace std;

int main() {

    Appliance a1;

    cout << a1.get_isOn() << endl;
    a1.turnOn();

    cout << a1.get_isOn() << endl;





    return 0;
}