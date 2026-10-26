#include <iostream>
#include "Player.h"
#include "Room.h"

using namespace std;

int main() {
    // When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
    // w moves up, a left, s down, and d right. 

    char** mapRows; // pointer to an address that contains characters; "a 2D array"; a pointer that holds an array, that array holds pointers too
    Player* player; // this is put on the heap, can be argued to be put on the stack
    Room* room;

    bool isRunning = true;
    while (isRunning) {
        // take user input
        // draw

    }

    return 0;
}