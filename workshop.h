#include <iostream>

using namespace std;


void changeValue(double* a) {
    *a = 42;
}

void printArray(double* array, int n) {

    for (int i =0; i<n; i++) {
        cout << array[i] << endl;
    }    

}


double* dynamicArray(int n) {

    double* array = new double[n]; 

    return array;
}