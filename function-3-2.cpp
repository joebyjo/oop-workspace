#include <iostream>
using namespace std;

int median_array(int array[], int n) {

    if (n <1 || n%2==0) {
        return 0;
    }

    
    // Perform bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap array[j] and array[j + 1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }


    return array[n/2];


}