#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {

    if (n <1) {
        // return zero if array is empty
        return 0;
    }

    int total = 0;

    for (int i=0; i<n; i++) {

        // add element to total

        total += array[i];
    }

    for (int i=0; i<n; i++) {

        // add element to total

        total += secondarray[i];
    }

    return total;

}