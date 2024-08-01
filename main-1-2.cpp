#include <iostream>

extern int sum_diagonal(int array[4][4]);

using namespace std;


int main(void) {

    int array[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};

    int sum = sum_diagonal(array);

    cout << sum << endl;


}