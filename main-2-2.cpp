#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);
using namespace std;

int main(void) {

    int array[] = {1,0,0,1,0,1,1};


    int x = binary_to_int(array,7);

    cout << x << endl;

    return 0;
}