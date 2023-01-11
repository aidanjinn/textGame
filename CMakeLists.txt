cmake_minimum_required(VERSION 3.24)
project(textGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(textGame main.cpp player.h player.cpp inventory.cpp inventory.h world.h world.cpp)
