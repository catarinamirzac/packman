#include "map.h"
#include <iostream>
#include <fstream>

void Map::loadMap(const char* filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                file >> grid[i][j];
            }
        }
    }
    file.close();
}

void Map::renderMap() {
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 20; ++j) {
            std::cout << grid[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
