#pragma once
// #include "Player.h"

// class Player;

// The map has a wall of # characters all the way around its edge. More # characters are distributed around the inside of the map, and they act as walls too.
// The @ starts on an open space. After each move, the program draws the whole map again with the @ in its new place.
// The @ never moves onto a #: if the next space is a wall, it stays where it is.

// A Room class holds the map. The map's size isn't known until the program runs, so the Room allocates the map with new and releases it in its destructor.
// The Room can draw itself, with the @ at the player's position.

class Player; // a forward declaration: "There will be a class called player used, I'm defining it later." Player depends on Room type, Room depends on Player type. Forward declarations just lets you use them as long as there aren't other issues.

// TODO: A thing picked up from the map has its letter as its id.
class Room {
    private:
        Player* player;
        int width;
        int height;
        char** map; // 2D array aka an array of arrays or an array of pointers to other arrays.
        // A char* would be an array of characters. A char** would be an array of pointers to arrays of characters.
        
    public:

        // TODO: placeItem leaves a thing on an open space, and takeItem takes the thing at a position off the map and returns its letter, or 0 if nothing is there.
        Room(int x, int y, Player* player); // allocate the map
        ~Room(); // deallocate the map
        void draw();
        // char tileAt(int x, int y);
        bool canMove(int x, int y);
};