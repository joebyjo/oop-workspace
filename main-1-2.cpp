#include <iostream>

using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {

    double array[] = {1,3,5,-6,-6.7,2};
    int size = sizeof(array) / sizeof(double);

    modifyArray(array,size, 3);

    for (int i=0; i<size; i++) {
       cout << array[i] << " ";
    }
    cout  << endl;

    return 0;
}