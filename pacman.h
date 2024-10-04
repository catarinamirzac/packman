#pragma once

#include "game_object.h" 

class Pacman : public GameObject {
public:
    Pacman(const Point& position);
    void move(char direction);
    void update() override; 
};
