#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "../Scene.h"
#include "../SceneManager.h"

using namespace std;

class GamePlay : public Scene {
public:
    void render();  

    void handle_events(SDL_Event* event);

    void update();

};

#endif