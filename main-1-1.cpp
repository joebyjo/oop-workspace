#include <iostream>

using namespace std;

extern int *readNumbers() ;
extern void printNumbers(int* array, int n) ;

int main() {

    int* array = readNumbers();

    printNumbers(array,10);

    delete[] array;


    return 0;

}