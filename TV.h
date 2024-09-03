#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV: public Appliance {

    private:
        double screenSize;
    
    public:
        TV();
        TV(int powerRating, double screenSize);

        void setScreenSize(double volume);
        double getScreenSize();

        double getPowerConsumption();

};


#endif