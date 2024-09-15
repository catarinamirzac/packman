#pragma once

class Engine {
public:
    void initialize(); 
    void update();    
    void render();    
    void handleInput(); 
    bool isRunning();   

private:
    bool running;       
};
