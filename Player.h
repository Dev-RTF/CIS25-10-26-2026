#pragma once // this replaces all that #ifndef PLAYER_H #define PLAYER_H #endif stuff
#include "Room.h"

// A Player class holds the player's position. Its move member function takes a key and the room, and moves the player only if the space in that direction isn't a wall.

class Room;

// TODO: The Player owns an Inventory. After a move, it takes anything lying on its new space and adds it to the inventory.
class Player {
    private:
        int x;
        int y;
        Room* room;

    public:
        Player(); 
        ~Player(); // A class that allocates memory should have a destructor to deallocate it all.    
        bool move(char direction, Room* room); // TODO: remove room from here

        int getX();
        int getY();

        // TODO: a way to associate a room with a player

};