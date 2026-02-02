#ifndef SCENE_H
#define SCENE_H
#pragma once

#include <SDL3/SDL.h>

class SceneManager;

class Scene {
public:
    virtual void render() = 0;
    virtual void handle_events(SDL_Event* event) = 0;
    virtual void update() = 0;
};

#endif