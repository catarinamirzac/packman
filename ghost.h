#pragma once

#include "game_object.h"
#include "point.h"

class Ghost : public GameObject {
public:
    Ghost(const Point& position);
    void move(); 
    void chasePacman(const Point& pacmanPosition); 
    void update() override;
};

