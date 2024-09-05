#ifndef CAR_H
#define CAR_H


class Car {

    protected:
        int price;
        int emissions;
    public:
        Car();
        Car(int price);

        virtual void drive(int kms);

        int get_price();
        int get_emissions();
        void set_price(int price);
        void set_emissions(int emissions);

};


#endif