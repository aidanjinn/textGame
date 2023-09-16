#include <iostream>
#include "player.h"
#include "inventory.h"
//#include "inventory.h"
#include "world.h"
#include  <string>
#include <vector>
#include <map>
#include <stdlib.h>


void  mapMovement(world map) {
    int pos[] = {0,0};
    bool cont = true;
    while (cont) {
        std::string input;

        if (std::cin >> input) {

            if (input == "r" && pos[1] < 10) {
                pos[1] += 1;
                if (pos[1] == 10) {
                    std::cout << "not valid input; please re-enter action\n";
                    pos[1]--;
                }

            } else if (input == "l" && pos[1] > 0) {
                pos[1] -= 1;

            } else if (input == "d" && pos[0] < 10) {
                pos[0] += 1;
                if (pos[0] == 10) {
                    std::cout << "not valid input; please re-enter action\n";
                    pos[0]--;
                }

            } else if (input == "u" && pos[0] > 0) {
                pos[0] -= 1;

            } else if (input == "x") {
                cont = false;

            } else if (input == "m") {
                std::cout << "Full Map\n" << "\n";
                map.displayMap();

            } else {
                std::cout << "not valid input; please re-enter action\n";
            }

            std::cout << "Current Pos -> " << pos[0] << " : " << pos[1] << "\n";
            map.visitLocation(pos[0],pos[1]);
            std::cout << "We can currently see\n" << "\n";
            map.displayAdjNodes(pos[0],pos[1]);
        }
    }
}



void combat(player character, player opponent) {
    //options:
    //strike
    //block
    //bash


    //run
    std::map<std::string, int> options;
    options["strike"] = 1;
    options["block"] = 2;
    options["run"] = 3;

    while (true) {

        int oppoOption = std::rand() % 2 + 1;

        std::string input;
        if (std::cin >> input) {


            switch (options[input]) {
                case (1):

                    if (oppoOption == 1) {
                        std::cout << "You were blocked\n";
                    } else if (oppoOption == 2) {
                        std::cout << "You were hit as well\n";
                        character.takeDamage(1);
                    }

                    break;
                case(2):

                    if (oppoOption == 1) {
                        std::cout << "Strike Blocked\n";
                    } else {
                        std::cout << "Your Opponent Blocked as well\n";
                    }

                    break;

                case(3):
                    std::cout << "you ran away\n";
                    return;
                default:
                    std::cout << "not Valid\n";
            }


            if (character.returnHealth() < 0) {
                std::cout << "character has died\n";
                return;
            } else if (opponent.returnHealth() < 0) {
                std:: cout << "opponent has died\n";
                character.gainExp(1);
                return;
            }
        }
    }

}


int main() {
    //world map;
    //mapMovement(map);

    //player man("man",1,1,1);
    //combat(man,man);






    return 0;
}
















