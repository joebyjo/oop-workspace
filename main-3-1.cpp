#include <iostream>

#include  "Car.h"
#include "Tesla.h"
#include "Ford.h"
#include "Fleet.h"

int main() {

    Fleet f1;

    Car** x = f1.get_fleet();

    x[0] = new Tesla('S', 10000);
    x[1] = new Ford(1, 20000);
    x[2] = new Car(30000);
    x[3] = new Ford(2, 40000); 
    x[4] = new Tesla('T', 50000);


    return 0;
}