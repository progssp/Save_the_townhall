#ifndef MAINMENU_H
#define MAINMENU_Hzz
#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "../Scene.h"
#include "../SceneManager.h"
#include "GamePlay.h"

using namespace std;

class MainMenu : public Scene {
public:
    void render(){
        cout << "render from main menu\n";
    }  

    void handle_events(SDL_Event* event){
        cout << "handle_event" << event << "from render from main menu\n";
        if(event->type == SDLK_RIGHT){
            SceneManager::changeScene(new GamePlay());
        }
    }

    void update(){
        cout << "update from main menu\n";
    }
};

#endif