#include <iostream>

double array_mean(int array[], int n) {

    if (n <1) {
        // return zero if array is empty
        return 0;
    }

    int total = 0;

    for (int i=0; i<n; i++) {

        // add element to total

        total += array[i];
    }

    return double(total/n);

}