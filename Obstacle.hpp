#ifndef OBSTACLE_HPP
#define OBSTACLE_HPP

#include "Interactable.hpp"
#include "Helper.hpp"


class Obstacle: public Interactable {
    public:
        Obstacle(int x, int y, int width, int height);
        bool interact(Robot* player);
        InteractableType getType();
};

Obstacle:: Obstacle(int x, int y, int width, int height):  Interactable(x,y,width,height) {
};

bool Obstacle::interact(Robot* player) {
    Helper h;
    if (h.euclideanDistance(this->coords,player->getCoordinates()) == 0) {
        player->takeHit();
        if (player->getHealth()==0) {
            return true;
        }
    }


    return false;

};

InteractableType Obstacle::getType() {
    return OBSTACLE;
};


#endif