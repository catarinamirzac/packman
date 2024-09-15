#include "engine.h"

int main() {
    Engine gameEngine;
    gameEngine.initialize();

    while (gameEngine.isRunning()) {
        gameEngine.handleInput();
        gameEngine.update();
        gameEngine.render();
    }

    return 0;
}


