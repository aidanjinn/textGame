//
// Created by Aidan Wendorf on 12/18/22.
//

#ifndef TEXTGAME_INVENTORY_H
#define TEXTGAME_INVENTORY_H
#include <iostream>
#endif //TEXTGAME_INVENTORY_H
struct slot
{
    bool occupied = false;
    int slotNum;
    std::string itemName;
    slot *next;
};

class item {

public:
    std::string id;
    //stat mods
    int speed;
    int strength;
    int wisdom;
    int defense;
    item(std::string name);
    void setMods(int speedP, int strengthP, int wisdomP, int defenseP);
};

class inventory {
    private:
    slot *head;
    slot *tail;
    public:
    inventory(int size);
    void add_slot(int num);
    void printInventory();
    void add_item(item itemName);
    void removeItem(int slot);
};
