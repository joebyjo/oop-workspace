#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "Robot.hpp"


enum InteractableType {
    GOAL,
    OBSTACLE
};


class Interactable: public GridItem {
    private:
        static int active_interactable;
        
        
    public:
        Interactable(int x, int y, int width, int height);
        Interactable();
        virtual bool interact(Robot* player)=0;
        virtual InteractableType getType()=0;
        int getActiveInteractableCount();

        ~Interactable();

};

int Interactable:: active_interactable=0;


Interactable:: Interactable(int x, int y, int width, int height): GridItem(x,y,width,height) {
    this->Interactable:: active_interactable = this-> Interactable::active_interactable + 1;
};

Interactable::  Interactable(): GridItem(0,0,0,0) {
    this->Interactable:: active_interactable = this-> Interactable::active_interactable + 1;
};


int Interactable::  getActiveInteractableCount() {
    return this->Interactable:: active_interactable;
    // getActiveGridItemCount();
};


Interactable::  ~Interactable() {
    this->Interactable:: active_interactable =  this->Interactable:: active_interactable -1;
}

#endif