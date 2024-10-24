#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "GridItem.hpp"


class Robot: public GridItem {
    private:
        int health;

    public:
        Robot(int gridWidth, int gridHeight);
        int getHealth() // gets the current health of the robot
        void takeHit() // decrements the health of the robot. The robot cannot have negative health
        bool move(int xOffset, int yOffset)

};




#endif