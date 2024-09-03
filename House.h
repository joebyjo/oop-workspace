#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

class House {

    private:
        int numAppliances;
        int current_count;

        Appliance** appliances;
    
    public:
        House();
        House(int numAppliances);
        ~House();

        bool addAppliance(Appliance* appliance);

        double getTotalPowerConsumption();

        

};



#endif
