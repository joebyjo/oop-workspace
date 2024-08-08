#include <iostream>

using namespace std;


extern double* array_add(double* array, int n, double m);
extern double* copy_array(double* array, int n);
extern double min(double* array, int n);

void print_array(double* array, int n) {
    for (int i=0; i<n; i++) {

        cout << array[i] << " ";
    }

    cout << endl;
}


int main(void) {

    double array[] = {-5,1,2,3,4,5,9};

    int n = sizeof(array)/ sizeof(double);

    double* new_array = copy_array(array,n);

    print_array(new_array,n);

    array_add(array,n,2);

    print_array(array,n);

    cout << min(array,n) << endl;

    delete[] new_array;

    return 0;
}