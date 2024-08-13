#include <iostream>


using namespace std;

int* readNumbers() {

    int* array = new int[10];

    for (int  i=0; i<10; i++) {

       cin >> array[i];
    }

    return array;
}

void printNumbers(int* array, int n) {

    for (int i=0; i<n; i++) {
        cout << i << " " << array[i] << endl;
    }

}

