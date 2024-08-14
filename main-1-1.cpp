#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main() {

    int n = 2;

    Person* array= createPersonArray(n);

    for (int i=0; i<n; i++) {
        cout << array[i].name << "   " << array[i].age << endl;
    }

    delete [] array;

    return 0;
}
