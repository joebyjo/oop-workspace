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


Interactable:: Interactable(int x, int y, int width, int height) {
    
};

#endif