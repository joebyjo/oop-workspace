#include <iostream>

using namespace std;

extern int *readNumbers() ;
extern void printNumbers(int* array, int n);
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int *reverseArray(int *numbers1,int length) ;

int main() {

    int* array1 = readNumbers();

    int* reversed = reverseArray(array1,10);

    printNumbers(reversed,10);

    cout << "Is equal: " << (equalsArray(array1,reversed,10) ? "True":"False") << endl;

    delete [] array1;
    delete [] reversed;
    
    return 0;

}
