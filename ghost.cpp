#include "ghost.h"
#include <cstdlib> 

Ghost::Ghost(const Point& position) : GameObject(position.x, position.y) {}

void Ghost::move() {
   
    int direction = rand() % 4;
    switch (direction) {
        case 0: position.y--; break;
        case 1: position.y++; break;
        case 2: position.x--; break;
        case 3: position.x++; break;
    }
}

void Ghost::chasePacman(const Point& pacmanPosition) {
    if (position.x < pacmanPosition.x) position.x++;
    else if (position.x > pacmanPosition.x) position.x--;

    if (position.y < pacmanPosition.y) position.y++;
    else if (position.y > pacmanPosition.y) position.y--;
}

void Ghost::update() {
    move(); 
}
