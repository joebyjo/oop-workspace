#include <iostream>

using namespace std;

extern int *readNumbers() ;
extern void printNumbers(int* array, int n);
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int secondSmallestSum(int *numbers,int length) ;

int main() {

    int array1[] = {1,2,3,4};
    // int* array1 = readNumbers();

    int second_smallest = secondSmallestSum(array1,4);

    cout << "Second Smallest: " << second_smallest << endl;

    // delete [] array1;
    
    return 0;

}
