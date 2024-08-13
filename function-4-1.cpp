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

int secondSmallestSum(int *numbers,int length) {

    int smallest = numbers[0];

    int second_smallest = numbers[0];

    for (int k=0; k<length; k++)

        for (int i=k; i<length; i++) {

            int sum1 = 0;

            for (int j=k; j<=i; j++) {
                sum1 += numbers[j];
            }
            cout << sum1 << endl;
            
            if (sum1< smallest) {
                second_smallest = smallest;
                smallest = sum1;
            } else if (sum1 > smallest && sum1 < second_smallest) {
                second_smallest = sum1;
            }


        }

    return second_smallest;

};

