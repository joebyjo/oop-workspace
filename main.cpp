#include <iostream>
#include "workshop.h"


using namespace std;



int main() {


    // double x = 1.23;
    // char y = 'a';

    // double *x_pointer = &x;
    // char *y_pointer = &y;

    // cout << *x_pointer << endl << *y_pointer << endl;

    // changeValue(x_pointer);

    // cout << *x_pointer << endl;


    // double array[] = {1,2,3};


    double* array = dynamicArray(3,4);

    printArray(array, 3);

    cout << "Max is: " << arrayMax(array,3) << endl;

    delete[] array;



    return 0;
}