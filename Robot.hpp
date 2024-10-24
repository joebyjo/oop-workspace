#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "GridItem.hpp"
#include "Helper.hpp"

class Robot: public GridItem {
    private:
        int health;


    public:
        Robot(int gridWidth, int gridHeight);
        int getHealth(); // gets the current health of the robot
        void takeHit(); // decrements the health of the robot. The robot cannot have negative health
        bool move(int xOffset, int yOffset);

};

Robot:: Robot(int gridWidth, int gridHeight): GridItem(0,0,gridWidth,gridHeight) {
    health = 3;
}

int Robot:: getHealth() {
    return this->health;
}
void Robot:: takeHit() {
    this->health--;
    if (health < 0) {
        this->health = 0;
    }
}


bool Robot:: move(int xOffset, int yOffset) {
    if ((coords.first + xOffset <= width && coords.second + yOffset <= height) && (coords.first + xOffset >= 0 && coords.second + yOffset >= 0)) {
        if (xOffset == 0) {
            coords.second += yOffset;
            return true;
        } else if (yOffset == 0) {
            coords.first += xOffset;
            return true;
        } 
    }
    return false;

    // if (xOffset)

}

#endif