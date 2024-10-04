#include "pacman.h"
#include <iostream>

Pacman::Pacman(const Point& position) : GameObject(position.x, position.y) {}

void Pacman::move(char direction) {
    switch (direction) {
        case 'w': position.y--; break; 
        case 's': position.y++; break; 
        case 'a': position.x--; break; 
        case 'd': position.x++; break; 
        default: break;
    }
}

void Pacman::update() {
    
}
