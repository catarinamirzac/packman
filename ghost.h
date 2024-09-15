#pragma once

#include "game_object.h"

class Ghost : public GameObject {
public:
    Ghost(int x, int y);
    void move(); 
    void chasePacman(int pacmanX, int pacmanY); 
};
