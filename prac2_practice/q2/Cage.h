#ifndef CAGE_H
#define CAGE_H

#include <string>
using namespace std;

class Cage {


    private:
        int id;
        string name;

    public:
        Cage();
        Cage(string name,int id);
        string getName();
        int getDnum();
        ~Cage();
};




#endif