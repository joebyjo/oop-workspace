

#include "TV.h"

TV:: TV(): Appliance(0) {
    screenSize =0;
};

TV:: TV(int powerRating, double volume): Appliance(powerRating), screenSize(screenSize) {
};

void TV:: setScreenSize(double screenSize) {
    this->screenSize = screenSize;
};

double TV:: getScreenSize(){
    return screenSize;
};

double TV::getPowerConsumption() {
    return powerRating * 24 * (screenSize/10);
};