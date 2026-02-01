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
    // std::unique_ptr<Scene> scene;
    Scene* scene;

public:
    SceneManager();

    std::unique_ptr<Scene> getActiveScene();

    void changeScene(std::unique_ptr<Scene> scene);

    void render();

    void handle_events(SDL_Event* event);

    void update();

        
};

#endif