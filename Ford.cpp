

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


void Ford:: refuel(int litres) {
    this->litresOfFuel += litres;

    if (this->litresOfFuel>= 60) {
        this->litresOfFuel = 60;
    }
}


void Ford:: drive(int kms) {
    // revisit

    // emissions = kms * 234;

    for (int i=0; i<kms; i++) {

        if (litresOfFuel==0) {
            return;
        }

        emissions += 234;

        if (i%5==0) {
            litresOfFuel -= 1;
        }
    }
};




int Ford::get_badgeNumber() {
    return badgeNumber;
};

float Ford::get_litresOfFuel(){
    return litresOfFuel;
};

void Ford::set_badgeNumber(int badgeNumber) {
    this-> badgeNumber = badgeNumber;
};
void Ford::set_litresOfFuel(float litresOfFuel) {
    this-> litresOfFuel = litresOfFuel;
};

