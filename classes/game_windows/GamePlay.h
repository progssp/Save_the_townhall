#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "../Scene.h"
#include "../SceneManager.h"
#include "MainMenu.h"

using namespace std;

class GamePlay : public Scene {
public:
    void render(){
        cout << "from game play\n";
    }  

    void handle_events(SDL_Event* event){
        cout << "handle_event" << event << "from render from game play\n";
        
    }

    void update(){
        cout << "update from game play\n";
    }
};

#endif