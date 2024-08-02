#include <iostream>

using namespace std;


extern int sum_min_max(int integers[], int length);

int main(void) {

    int array[] = {1,2,3,4,5};

    int x = sum_min_max(array,5);

    cout << x << endl;

    return 0;
}