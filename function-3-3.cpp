#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {

    if (n <1) {
        return 0;
    }

    int weighted_avg = 0;

    for (int i=0; i<n; i++) {

        int count = 0;

        for (int j=0; j<n; j++) {

            if (array[i] == array[j]) {
                count++;
            }

        }

        weighted_avg += (array[i] * count/n);
    }


    return weighted_avg;
}