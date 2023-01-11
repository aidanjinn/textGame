//
// Created by Aidan Wendorf on 12/18/22.
//
#include "inventory.h"

inventory::inventory(int size) {
    head = nullptr;
    tail = nullptr;
    for (int i = 0; i<size; i++) {
        add_slot(i+1);
    }
}

void inventory::add_slot(int num) {
    slot *tmp = new slot;
    tmp->slotNum = num;
    tmp->next = nullptr;
    if (head == nullptr) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tail->next;
    }
}

void inventory::add_item(item itemName) {
    slot *tmp;
    tmp = head;
    bool itemFilled = false;
    while(!itemFilled && tmp != nullptr) {
        if (tmp->occupied) {
            tmp = tmp->next;
        } else {
            tmp->occupied = true;
            tmp->itemName = itemName.id;
            itemFilled = true;
        }
    }
}

void inventory::removeItem(int slot) {
    struct slot *tmp;
    tmp = head;
    while(tmp != nullptr) {
        if (tmp->slotNum == slot) {
            tmp->occupied = false;
            tmp->itemName = "";
            return;
        }
    }
}

void inventory::printInventory() {
    slot *tmp;
    tmp = head;
    std::cout << "Inventory:" << std::endl;
    std::cout << " | ";
    while (tmp != nullptr) {
        std::cout << tmp->itemName << " | ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

item::item(std::string name) : id(name) {}

void item::setMods(int speedP, int strengthP, int wisdomP, int defenseP) {
    speed = speedP;
    strength = strengthP;
    wisdom = wisdomP;
    defense = defenseP;
}