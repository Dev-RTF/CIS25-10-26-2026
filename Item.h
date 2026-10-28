// TODO: An Item class holds an id and a name, as std::strings. 
#pragma once

#include <iostream>

using namespace std;

class Item {
    private:
        string id;
        string name;
    public:
        Item(string id = "*", string name = "empty space"); // you can set defaults
        string getId();
        string getName();
        void setId(string id);
        void setName(string name);
};