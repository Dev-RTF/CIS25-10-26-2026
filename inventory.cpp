#include "Inventory.h"

Inventory::Inventory() {
    this->arraySize = 2;
    this->items = new Item[arraySize];
    this->numberOfItems = 0;
}

Inventory::~Inventory() {
    delete[] this->items; // If there were no brackets, only the first item would be deleted.
}

bool Inventory::addItem(Item item) {
    // check if the array is big enough
    if (this->numberOfItems >= this->arraySize) {
        // 1. Create new array that is quite as big.
        // 2. Copy over the existing array.
        // 3. Delete the old array.
    }
    this->items[this->numberOfItems] = item;
    this->numberOfItems += 1;
}

bool Inventory::removeItem(string id) {
    this->numberOfItems -= 1;
}

bool Inventory::hasItem(string id) {

}