// TODO: An Inventory class keeps Items in an array it allocates with new[], starting with room for 2. 
// When it's full, it allocates an array twice as big, copies the items over, and releases the old one with delete[].
// The Inventory can add an item, remove an item by its id, and say whether it holds one. It releases its array in its destructor, and it's never copied: pass it by reference.
#pragma once

#include "Item.h"

class Inventory {
    private:
        Item* items;
        int numberOfItems;
        int arraySize;
    public:
        Inventory(); // allocate space for 2 items initially
        ~Inventory(); // deallocate the items array

        bool addItem(Item item);
        bool removeItem(string id);
        bool hasItem(string id); // returns true if an item is in the inventory
};