#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main() {

    double array[] = {1,3,5,-6,-6.7,2};
    int size = sizeof(array) / sizeof(double);

    double min = arrayMin(array,size);

    cout << "Min is : " << min << endl;


    return 0;
}