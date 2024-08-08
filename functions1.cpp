#include <iostream>

using namespace std;


double* array_add(double* array, int n, double m) {

    for (int i=0; i<n; i++) {
        array[i] = array[i] + m;
    }



    return array;
}


double* copy_array(double* array, int n) {

    double* new_array= new double[n];

    for (int i=0; i<n; i++) {
        new_array[i] = array[i];
    }

    return new_array;
}

double min(double* array, int n) {
    double min = array[0];

    for (int i =i; i<n; i++ ) {
        if (min>array[i]) {
            min = array[i];
        }
    }
    return min;
}