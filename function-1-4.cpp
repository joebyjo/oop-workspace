#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {

    Person* array = new Person[n];

    for (int i=0; i<n; i++) {

        array[i].name = "Jane Doe";
        array[i].age = 1;
    }

    PersonList people;
    people.people  = array;
    people.numPeople = n;

    return people;
}

PersonList shallowCopyPersonList(PersonList pl) {

    PersonList copy;

    copy.numPeople = pl.numPeople;

    copy.people = pl.people;

    return copy;

}