#include <iostream>

using namespace std;

extern double* duplicateArray(double* array, int size);

int main() {

    double array[] = {1,3,5,-6,-6.7,2};
    int size = sizeof(array) / sizeof(double);

    double* new_array = duplicateArray(array,size);

    for (int i=0; i<size; i++) {
       cout << new_array[i] << " ";
    }
    cout  << endl;

    return 0;
}