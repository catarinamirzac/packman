#include "main.h"  
#include <iostream>
#include "message.h"


int main() {
    
    message msg;
    msg.printMessage();
    return 0;

    Engine gameEngine;

    
    gameEngine.initialize();

   
    while (gameEngine.isRunning()) {
        
        gameEngine.handleInput();

        
        gameEngine.update();

        
        gameEngine.render();
    }

    
    return 0;
}
