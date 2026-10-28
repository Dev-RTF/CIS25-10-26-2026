#pragma once
// #include "Player.h"

// class Player;

// The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.
// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.
// The @ never moves onto a #: if the next space is a wall, it stays where it is.

// A Room class holds the map. The map's size isn't known until the program runs, so the Room allocates the map with new and releases it in its destructor.
// The Room can draw itself, with the @ at the player's position.

class Room {
    private:
        // Player* player;
        int width;
        int height;
        char** map;
        
        // TODO: what type should the map be? probably some kind of array type char
    public:
        Room(int x, int y); // allocate the map
        ~Room(); // deallocate the map
        void draw();
};