#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <utility>
using namespace std;

class GridItem {
    protected:
        pair<int,int> coords;
        int width;
        int height;

        static int ActiveGridItemCount;

    public:
        GridItem(int x, int y, int width, int height);
        GridItem();

        void setCoordinates(int x, int y);
        pair<int,int> getCoordinates();

        int getGridWidth();
        int getGridHeight();
        int getActiveGridItemCount();

        virtual ~GridItem();

};

GridItem:: GridItem(int x, int y, int width, int height) {
    coords.first = x;
    coords.second = y;

    this->width = width;
    this->height = height;

    ActiveGridItemCount++;
};

GridItem:: GridItem(): GridItem(0,0,0,0){
};

void GridItem:: setCoordinates(int x, int y) {
    this->coords.first = x;
    this->coords.second = y;
};
pair<int,int> GridItem:: getCoordinates() {
    return this->coords;
};

int GridItem:: getGridWidth() {
    return this->width;

};
int GridItem:: getGridHeight() {
    return this->height;
};


int GridItem:: getActiveGridItemCount() {
    return this->ActiveGridItemCount;
};

GridItem:: ~GridItem() {
    // ActiveGridItemCount--;
};


#endif