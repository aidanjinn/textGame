#include <iostream>
#include "player.h"
#include "inventory.h"
//#include "inventory.h"
#include "world.h"
#include  <string>
#include <vector>
int main() {

    //Map Traversal Script
    world map;
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
    //Map Traversal Script End





    return 0;
}
















