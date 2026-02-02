#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "Scene.h"
#include <memory>

using namespace std;

class SceneManager{
private:
    static Scene* scene;

public:

    static void changeScene(Scene* new_scene);

    static void render();

    static void handle_events(SDL_Event* event);

    static void update();

        
};

#endif