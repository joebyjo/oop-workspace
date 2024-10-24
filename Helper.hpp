#ifndef HELPER_H
#define HELPER_H

#include <utility>
#include <cmath>
using namespace std;

class Helper {
    public:
        static double euclideanDistance(pair<int, int> item1, pair<int, int> item2);
};

double Helper:: euclideanDistance(pair<int, int> item1, pair<int, int> item2) {
    double distance = sqrt( pow(item2.first - item1.first,2) + pow(item2.second - item1.second,2));
    return distance;
}


#endif