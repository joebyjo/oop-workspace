#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {

    int n = 2;

    PersonList array= createPersonList(n);

    PersonList array2= shallowCopyPersonList(array);

    for (int i=0; i<array2.numPeople; i++) {
        cout << array2.people[i].name << "   " << array2.people[i].age << endl;
    }

    return 0;
}
