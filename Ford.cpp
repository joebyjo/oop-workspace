

#include "Ford.h"


Ford:: Ford() {
    this->price = 0;
    this->emissions = 0;
    this->badgeNumber = 0;
    this->litresOfFuel = 60;
};

Ford:: Ford(int badgeNumber, int price): Car(price) {
    this->badgeNumber = badgeNumber;
    this->litresOfFuel = 60;
};

