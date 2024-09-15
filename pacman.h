#pragma once

#include "game_object.h" 

class Pacman : public GameObject {
public:
    Pacman(int x, int y);
    void move(char direction); 
    void eat(); 

private:
    int score; 
};
