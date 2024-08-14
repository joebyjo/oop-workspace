#ifndef PERSON_H
#define PERSON_H

using namespace std;

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif