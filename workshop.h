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

double arrayMax(double* array, int n) {
    double max = array[0];
    for (int i=1; i<n; i++) {
        if (array[i]> max) {
            max = array[i];
        }
    }

    return max;
}




double* dynamicArray(int n, double M) {

    double* array = new double[n]; 

    for (int i=0;i<n; i++) {
        array[i] = M;
    }

    return array;
}