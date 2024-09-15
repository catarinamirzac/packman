#pragma once

class GameObject {
public:
    GameObject(int x, int y);
    virtual void update() = 0; 
protected:
    int x, y; 
};
