#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main() {

    int n = 2;

    PersonList array= createPersonList(n);

    for (int i=0; i<array.numPeople; i++) {
        cout << array.people[i].name << "   " << array.people[i].age << endl;
    }

    return 0;
}
