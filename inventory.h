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

class inventory {
    private:
    slot *head;
    slot *tail;
    public:
    inventory(int size);
    void add_slot(int num);
    void printInventory();
    void add_item(std::string item);
};