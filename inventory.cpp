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

void inventory::add_item(std::string item) {
    slot *tmp;
    tmp = head;
    bool itemFilled = false;
    while(!itemFilled && tmp != nullptr) {
        if (tmp->occupied) {
            tmp = tmp->next;
        } else {
            tmp->occupied = true;
            tmp->itemName = item;
            itemFilled = true;
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