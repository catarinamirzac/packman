#pragma once
#include "point.h"

class GameObject {
public:
    GameObject(int x, int y) : position(x, y) {}
    virtual void update() = 0; 
protected:
    Point position;
};
