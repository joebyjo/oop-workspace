#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

using namespace std;

enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {

    private:
        tuple<int, int> position;
        GameEntityType type;

    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos();
        GameEntityType getType();
};

GameEntity:: GameEntity(int x, int y, char type) {
    position = make_tuple(x,y);
    switch (type) {
        case 'E':
            type = ExplosionType;
            break;
        case 'M':
            type = MineType;
            break;
        case 'N':
            type = NoneType;
            break;
        case 'S':
            type = ShipType;
            break;
    }
}


tuple<int, int> GameEntity:: getPos() {
    return this-> position;
};
GameEntityType GameEntity:: getType() {
    return this->type;
};



#endif