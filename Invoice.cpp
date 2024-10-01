#include"Invoice.h"
#include <string>
Invoice::Invoice(){}
    Invoice::Invoice(std::string name):name(name),dollars(0){}
    void Invoice::addServiceCost(double cost){dollars+= cost;}
    double Invoice::getDollarsOwed(){return dollars;}
    std::string Invoice::getname(){return name;}