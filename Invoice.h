#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
protected:
    double dollars;
    std::string name;
    double cost;
public:
    Invoice();
    Invoice(std::string name);
    void addServiceCost(double cost);
    double getDollarsOwed();
    std::string getname();
};
#endif