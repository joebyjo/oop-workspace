#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "Robot.hpp"
#include "Obstacle.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"


enum GameState {
    WIN,
    LOSE,
    PLAYING
};

class Game {
    private:
        Robot* player;
        Goal* goal;
        vector<Obstacle*> game_grid;

        int width;
        int height;

        GameState game_state;

    public:
        Game(int width, int height, vector<pair<int, int>> obstacleCoordinates);
        bool displayState();
        void movePlayer(int dx, int dy);
        void printGrid();
};


Game:: Game(int width, int height, vector<pair<int, int>> obstacleCoordinates): width(width),height(height) {
    player = new Robot(width,height);
    goal = new Goal(width,height);

    for (int i = 0; i< obstacleCoordinates.size(); i++) {

        int x__ = obstacleCoordinates[i].first;
        int y__ = obstacleCoordinates[i].second;

        if ((x__ != 0 && y__ !=0) || (x__ != width-1 && y__ !=height-1)) {
            continue;
        }

        game_grid.push_back(new Obstacle(x__,y__,width,height));

    }


    game_state = PLAYING;

};





bool Game:: displayState() {
    if (game_state == WIN) {
        cout << "You win!" << endl;
        return true;
    } else if (game_state == LOSE) {
        cout <<"You lose :("  << endl;
        return true;
    } else if (game_state == PLAYING) {
        cout << "Game on"  << endl;
        return false;
    }

};


void Game:: movePlayer(int dx, int dy) {
    
    if (game_state == PLAYING){
        player->move(dx,dy);

        if (goal->interact(player)) {
            game_state = WIN;
        }

        for (int i = 0; i< game_grid.size(); i++) {
            if (game_grid[i]->interact(player)) {
                game_state = LOSE;
            }
        }

    }

};



void Game:: printGrid() {

    for (int i=0; i<width; i++) {
        for (int j=0; j< height; j++) {
            
            if (player->getCoordinates() == make_pair(i,j)) {
                cout << "P";
            } else if (goal->getCoordinates() == make_pair(i,j)) {
                cout << "G";
            }

            bool obst = false;

            for (int i = 0; i< game_grid.size(); i++) {
                if (game_grid[i]->getCoordinates() == make_pair(i,j)) {
                    cout << "O";
                    obst = true;
                    break;
                }
            }

            if (!obst) {
                cout << "_";
            }



        }

        cout << endl;
    }

};


#endif 