#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {

    PersonList copy;

    copy.numPeople = pl.numPeople;

    Person* array = new Person[pl.numPeople];

    for (int i=0; i<copy.numPeople; i++) {
        array[i].name = pl.people[i].name;
        array[i].age = pl.people[i].age;
    }

    copy.people = array;

    return copy;

}