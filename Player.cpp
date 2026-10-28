#include "Player.h"
#include "Room.h"

Player::Player() {
    this->x = 3;
    this->y = 3;
}

Player::~Player() {
    // Player doesn't allocate any memory, so keep this empty.
}

// Return true if player moved, false if not.
bool Player::move(char direction, Room* room) {
    // Take in a direction, check which direction it is, check if player can move there in the room, 
    // then if they can, change the player's x and y.

    if (direction == 'w') {
        // Check if there's anything blocking us at the position we'd move to
        if (room->canMove(this->x, this->y - 1)) {
            this->y -= 1;
            return true;
        }
    }
    else if (direction = 'a') {
        if (room->canMove(this->x - 1, this->y)) {
            this->x -= 1;
            return true;
        }
    }
    else if (direction = 's') {
        if (room->canMove(this->x, this->y + 1)) {
            this->y += 1;
            return true;
        }
    }
    else if (direction = 'd') {
        if (room->canMove(this->x + 1, this->y)) {
            this->x += 1;
            return true;
        }
    }

    return false;
}