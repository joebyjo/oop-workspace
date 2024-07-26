#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main() {
    int array[] = {1,2,1,4,1,3} ;
    cout << weighted_average(array, 6) << std::endl;
}