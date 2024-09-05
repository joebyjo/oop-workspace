

#include "Fleet.h"


Fleet:: Fleet() {
    fleet = new Car* [5];
}


Car** Fleet:: get_fleet() {
    return this->fleet;
};


Fleet:: ~Fleet() {
    for (int i=0; i<5;i++) {
        delete fleet[i];
    }

    delete[] fleet;
};