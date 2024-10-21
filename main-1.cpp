#include <iostream>
#include "Utils.h"

using namespace std;

int main() {

    Utils test;
    double distance = test.calculateDistance(test.generateRandomPos(5,5),test.generateRandomPos(5,5));
    double distance1 = test.calculateDistance(test.generateRandomPos(10,10),test.generateRandomPos(10,10));
    double distance2 = test.calculateDistance(test.generateRandomPos(4,4),test.generateRandomPos(4,4));

    cout << distance << endl;
    cout << distance1 << endl;
    cout << distance2 << endl;
    

    return 0;
}