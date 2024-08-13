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

    int count = 0;

    for (int i=0;i<length; i++){
        count += i;
    }

    int* sum_array = new int[count];

    int index=0;

    for (int k=0; k<length; k++)

        for (int i=k; i<length; i++) {

            int sum1 = 0;

            for (int j=k; j<=i; j++) {
                sum1 += numbers[j];
            }
            sum_array[index] = sum1;
            index++;

        }


    sort(sum_array ,sum_array +count);

    int second_smallest = sum_array[1];

    return second_smallest;

};

