#ifndef UTILS_H
#define UTILS_H


#include <tuple>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

class Utils {
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);

};


tuple<int, int> Utils:: generateRandomPos(int gridWidth, int gridHeight) {
    srand(time(0));

    int x = rand() % gridWidth;
    int y = rand() % gridHeight;

    return make_tuple(x,y);
};


double Utils:: calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {

    int x1 = get<0>(pos1);
    int y1 = get<1>(pos1);
    int x2 = get<0>(pos2);
    int y2 = get<1>(pos2);

    double distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    return distance;

};


#endif