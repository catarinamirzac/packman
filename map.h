#pragma once

class Map {
public:
    void loadMap(const char* filename); 
    void renderMap(); 
private:
    char grid[20][20]; 
};
