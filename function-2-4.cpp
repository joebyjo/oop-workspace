#include <iostream>
using namespace std;



bool is_ascending(int array[], int n) {
  
    for (int i=1; i<n; i++) {

        if (array[i-1] > array[i]) {
            return 0;
        }

    }

    return 1;
}