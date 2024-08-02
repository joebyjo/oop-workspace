#include <iostream>

using namespace std;


extern int sum_if_palindrome(int integers[], int length);

int main(void) {

    int array[] = {1,2,2,1,2};

    int x = sum_if_palindrome(array,5);

    cout << x << endl;

    return 0;
}