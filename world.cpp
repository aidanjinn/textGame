//
// Created by Aidan Wendorf on 12/20/22.
//
#include "world.h"

world::world() {
    map[0][0].id = "starting location";
    map[0][0].visited = true;
    map[0][0].difficulty = 0;
}

void world::setLocationParam(int row, int column, std::string name, int rating) {
    map[row][column].id = name;
    map[row][column].difficulty = rating;
}

void world::visitLocation(int row, int column) {
    map[row][column].visited = true;
}

void world::displayMap() {
    int row = 0;
    int column = 0;
    while (row < 10) {
        if (column < 10) {
            std::cout << map[row][column].visited << " | ";
            column++;
        } else {
            std::cout << std::endl;
            row++;
            column = 0;
        }
    }
}

void world::displayAdjNodes(int row, int column) {

    //corners
    if (column == 0 && row == 0) {
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column+1].visited << " | " << std::endl;
        std::cout << map[row+1][column].visited << " | " << std::endl;
    } else if  (column == 9 && row == 0) {
        std::cout << map[row][column - 1].visited << " | ";
        std::cout << map[row][column].visited << " | " << std::endl;
        std::cout << "    " << map[row + 1][column].visited << " | " << std::endl;
    } else if (column == 0 && row == 9) {
        std::cout << map[row - 1][column].visited << " | " << std::endl;
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column + 1].visited << " | " << std::endl;
    } else if (column == 9 && row == 9) {
        std::cout << "    " << map[row - 1][column].visited << " | " << std::endl;
        std::cout << map[row][column - 1].visited << " | ";
        std::cout << map[row][column].visited << " | " << std::endl;
    } else if (row == 0) {
        std::cout << map[row][column-1].visited << " | ";
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column+1].visited << " | " << std::endl;
        std::cout << "    " << map[row-1][column].visited << " | " << std::endl;
    } else if (row == 9) {
        std::cout << "    " << map[row+1][column].visited << " | " << std::endl;
        std::cout << map[row][column-1].visited << " | ";
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column+1].visited << " | " << std::endl;
        //bottom and top row done now left and right sides
    } else if (column == 0) {
        std::cout << map[row+1][column].visited << " | " << std::endl;
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column+1].visited << " | " << std::endl;
        std::cout << map[row-1][column].visited << " | " << std::endl;
    } else if (column == 9) {
        std::cout << "    " << map[row+1][column].visited << " | " << std::endl;
        std::cout << map[row][column-1].visited << " | ";
        std::cout << map[row][column].visited << " | " << std::endl;
        std::cout << "    " << map[row-1][column].visited << " | " << std::endl;
        //left and right columns done and now we do every other node inside map borders
    } else {
        std::cout << "    " << map[row+1][column].visited << " | " << std::endl;
        std::cout << map[row][column-1].visited << " | ";
        std::cout << map[row][column].visited << " | ";
        std::cout << map[row][column+1].visited << " | " << std::endl;
        std::cout << "    " << map[row-1][column].visited << " | "  << std::endl;
    }
}

