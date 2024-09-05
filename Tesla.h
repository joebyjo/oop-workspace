#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla: public Car{

    protected:
        char model;
        float batteryPercentage;
    public:
        Tesla();            
        Tesla(char model, int price);

        void chargeBattery(int mins);            
        void drive(int kms);     

        float get_batteryPercentage();
        char get_model();
        void set_batteryPercentage(float batteryPercentage);
        void set_model(char model);

};


#endif