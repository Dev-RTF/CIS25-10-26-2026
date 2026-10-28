#include <iostream>
#include "Player.h"
#include "Room.h"

using namespace std;

int main() {
    // When the program starts, it asks the user how big the map should be: a number of rows and a number of columns.
    // w moves up, a left, s down, and d right. 

    Player player;
    Room room(20, 10, &player);
    room.draw();
    
    // char** mapRows; // Pointer to an address that contains characters. "a 2D array". A pointer that holds an array, that array holds pointers too.
    // Player* player; // This is put on the heap, can be argued to be put on the stack.
    // Room* room;

    bool isRunning = true;
    while (isRunning) {
        // take user input
        // draw
        room.draw();

        char input;
        cout << "Please use the wasd keys to move or press q to quit: ";
        cin >> input;

        if (input == 'q') {
            isRunning = false;
        }
        else {
            player.move(input, &room); // Player takes the memory address of the Room
        }


    }

    return 0;
}