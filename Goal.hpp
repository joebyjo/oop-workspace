#ifndef GOAL_H
#define GOAL_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal: public Interactable {
    public:
        Goal(int width, int height);
        bool interact(Robot* player);
        InteractableType getType();
};



Goal:: Goal(int width, int height): Interactable(width-1,height-1,width,height) {

};

bool Goal:: interact(Robot* player) {
    Helper h;
    if (h.euclideanDistance(this->coords,player->getCoordinates()) == 0) {
        return true;
    }
    return false;

};

InteractableType Goal:: getType() {
    return GOAL;
};

#endif