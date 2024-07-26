#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {

    if (n <1) {
        return 0;
    }

    double weighted_avg = 0.0;

    for (int i=0; i<n; i++) {

        double count = 0;

        for (int j=0; j<n; j++) {

            if (array[i] == array[j]) {
                count++;
            }

        }

        weighted_avg +=  (double) (array[i] * count/n);
    }


    return weighted_avg;
}