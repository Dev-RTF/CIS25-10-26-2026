#include "Room.h"
#include "Player.h"

#include <iostream>

using namespace std;

Room::Room(int x, int y, Player* player) {
    
    this->player = player;
    this->height = y;
    this->width = x; // Whether there is a this-> or not doesn't really matter. It works either way. Using this-> is clearer, showing that it refers to a class instance variable.
    this->map = new char*[y];
    for (int outerCounter = 0; outerCounter < y; outerCounter++) {
        this->map[outerCounter] = new char[x];
        
        for (int innerCounter = 0; innerCounter < x; innerCounter++) {
            if (outerCounter == 0 || outerCounter == (y - 1) || innerCounter == 0 || innerCounter == (x - 1)) {
                this->map[outerCounter][innerCounter] = '#';    
            }
            else {
                this->map[outerCounter][innerCounter] = ' ';
            }
        }
    }
}

Room::~Room() {

}

bool Room::canMove(int x, int y) {
    if (map[y][x] != '#') {
        return true;
    }
    return false;
}

void Room::draw() {
    for (int outerCounter = 0; outerCounter < height; outerCounter++) {
        for (int innerCounter = 0; innerCounter < width; innerCounter++) {
            if (this->player->getX() == innerCounter && this->player->getY() == outerCounter) {// check if player is on this spot 
                cout << '@';
            }
            else {
                cout << this->map[outerCounter][innerCounter];
            }
        }
        cout << endl;
    }
}