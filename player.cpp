//
// Created by Aidan Wendorf on 12/18/22.
//
#include <iostream>
#include "player.h"

player::player(std::string nameP,int strengthP, int speedP, int wisdomP)
 : strength(strengthP), speed(speedP), wisdom(wisdomP), name(nameP) {
    defenseHealthCalc();
}

void player::displayStats() {
    std::cout << name << "'s stats:" << std::endl;
    std::cout << "Class: " << classType << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Wisdom: " << wisdom << std::endl;
    std::cout << "Defense: " << defense << std::endl;
}

void player::setClass(int classNumber) {
    classType = classes[classNumber];
    classBonus(classNumber);
    defenseHealthCalc();
}

void player::classBonus(int classNumber) {
    if (classNumber == 0) {
        strength = strength + 3;
    } else if (classNumber == 1) {
        wisdom = wisdom + 3;
    } else {
        speed = speed + 3;
    }
}
//have current maximum hearts be capped at 100;
//starting amount is always 15;
//have defense max amount be 20;
//starting amount is 10;
void player::defenseHealthCalc() {
    defense = 10 + (strength + speed)/2;
    if (defense > 20) {
        defense = 20;
    }
    health = 15 * strength + defense;
    if (health > 100) {
        health = 100;
    }
}

void player::takeDamage(int damageAmount) {
    health -= damageAmount;
}

void player::regainHealth(int gainAmount) {
    health += gainAmount;
}


