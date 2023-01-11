//
// Created by Aidan Wendorf on 12/20/22.
//

#ifndef TEXTGAME_WORLD_H
#define TEXTGAME_WORLD_H

#endif //TEXTGAME_WORLD_H
#include <iostream>

struct locationNode {
    std::string id;
    bool visited = false;
    int difficulty;
};

class world {
    private:
    locationNode map[10][10];
    public:
    world();
    void setLocationParam(int row, int column, std::string name, int difficulty);
    void visitLocation(int row, int column);
    void displayMap();
    void displayAdjNodes(int row, int column);

};