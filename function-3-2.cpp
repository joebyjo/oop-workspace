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

bool equalsArray(int *numbers1,int *numbers2,int length) {

    if (length<1) {
        return false;
    }


    for (int i=0; i<length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    
    return true;

};

int* reverseArray(int *numbers1,int length) {

    int* reverse = new int[length];

    for (int i=length-1; 0<=i;i--) {
        reverse[length-i-1] = numbers1[i];
    }

    return reverse;

};