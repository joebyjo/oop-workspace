

#include "Fleet.h"


Fleet:: Fleet() {
    fleet = new Car* [5];
}


Car** Fleet:: get_fleet() {
    return this->fleet;
};