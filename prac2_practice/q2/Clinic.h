#ifndef CLINIC_H
#define CLINIC_H

#include "Cage.h"

class Clinic {

    private:
        string name;
        int max_cages;
        int current_cages;
        Cage* array;
    public:
        Clinic();
        Clinic(string name, int max_size);
        ~Clinic();

        int getNumber_of_cages();
        string getName();
        Cage* getCages();
        bool addCage(Cage new_cage);
};



#endif