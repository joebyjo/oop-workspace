#include <iostream>

int num_count(int array[], int n, int number) {

    if (n <1) {
    // return zero if array is empty
    return 0;
    }

    int count = 0;

    for (int i=0; i<n; i++) {

        // increment count
        if (array[i] == number){
            count++;
        }
    }

    return count;

}