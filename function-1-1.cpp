#include <iostream>
using namespace std;


int sum_diagonal(int array[4][4]) {

    int sum1 = 0;

    for (int i=0; i<4; i++) {
        sum1 += array[i][i];
        // cout << i;
    
    }

    return sum1;
}