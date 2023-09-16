//
// Created by Aidan Wendorf on 12/18/22.
//

#ifndef TEXTGAME_PLAYER_H
#define TEXTGAME_PLAYER_H
#endif //TEXTGAME_PLAYER_H
class player {

    //player character stats
private:
    int strength;
    int speed;
    int wisdom;
    int health;
    int defense;
    std::string name;
    std::string classType;
    std::string classes[3] = {"warrior","mage", "thief"};


public:
    player(std::string nameP, int strengthP, int speedP, int wisdomP);
    void displayStats();

    //setting class; currently have 3 classes warrior, mage, thief; match array of classes (0-2)
    // in that order
    void setClass(int classNumber);

    //adds player's class bonus to stats
    void classBonus(int classNumber);

    //calculates player defense/health stats based off defense, strength, speed
    void defenseHealthCalc();

    //health manipulation
    void takeDamage(int damageAmount);
    void regainHealth(int gainAmount);

};