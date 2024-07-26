#include <iostream>

bool is_fanarray(int array[], int n) {

    if (n <1) {
        return 0;
    }

    int mid = n / 2; // finding the middle value

    for (int i = 0; i < mid ; i++){

        // ascending (left to right)
        if (array[i] > array[i + 1]){
            return false;
        }

        // descending (right to left)
        if (array[n - i - 1 ] > array[n - i - 2]){
            return false;
        }
         
        // comparing the corresponding numbers
        if (array[n - i -1] != array[i]){ 
            return false;
        }
    }

    return true;

}