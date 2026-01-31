#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H
#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "Scene.h"

using namespace std;

class SceneManager{
private:
    Scene* scene = nullptr;

public:
    SceneManager(Scene* scene){
        this->scene = scene;
    }

    void changeScene(Scene* scene){
        if(this->scene == nullptr){
            cout << "scene is null\n";
            this->scene = scene;
        }
        else{
            cout << "scene not null\n";
            delete this->scene;
            this->scene = scene;
        }
    }

    void render(){
        this->scene->render();
    }

    void handle_events(SDL_Event* event){
        this->scene->handle_events(event);
    }

    void update(){
        this->scene->update();
    }

        
};

#endif