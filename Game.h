#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>


class Game {
    private:
        vector<GameEntity*> entities;
    
    public:
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
        void gameLoop(int maxIterations, double mineDistanceThreshold);

        vector<GameEntity*> get_entities();
        void set_entities(vector<GameEntity*> entities);


};


vector<GameEntity*> Game:: initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    Utils u;
    
    for (int i = 0; i< numShips; i++) {
        tuple<int, int> randomPos = u.generateRandomPos(gridWidth,gridHeight);
        Ship* ship = new Ship(get<0>(randomPos),get<1>(randomPos));
        entities.push_back(ship);
    }

    for (int i = 0; i< numMines; i++) {
        tuple<int, int> randomPos = u.generateRandomPos(gridWidth,gridHeight);
        Mine* ship = new Mine(get<0>(randomPos),get<1>(randomPos));
        entities.push_back(ship);
    }

    return entities;

};


void Game:: gameLoop(int maxIterations, double mineDistanceThreshold) {
    Utils u;

    for (int i = 0; i < maxIterations; i++) {

        for (int j = 0; j < entities.size(); j++){
            GameEntity* entity1 = entities[j];
            if (entity1->getType()== ShipType) {
                static_cast<Ship*>(entity1)->move(1,0);

                // if (u.calculateDistance())

                for (int k = 0; k < entities.size(); k++) { 
                    GameEntity* entity2 = entities[k];
                    if (entity2->getType()== MineType) {
                        if ((u.calculateDistance(entity1->getPos(),entity2->getPos()) >= mineDistanceThreshold)) {
                            static_cast<Mine*>(entity2)->explode();
                        }
                    }
                }


            }

        }
    }
};





vector<GameEntity*> Game:: get_entities() {
    return entities;
};



void Game:: set_entities(vector<GameEntity*> entities) {
    this->entities = entities;
};



#endif