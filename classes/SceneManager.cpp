#include "SceneManager.h"


SceneManager::SceneManager(){
    this->scene.reset();
}

std::unique_ptr<Scene> SceneManager::getActiveScene(){
    return this->scene;
}

void SceneManager::changeScene(std::unique_ptr<Scene> new_scene){
    // this->scene.reset();
    // this->scene = std::move(new_scene);
    if(this->scene){
        cout << "scene is not null\n";
        // this->scene = std::move(scene);
    }
    else{
        cout << "scene is null\n";
        // delete this->scene;
        // this->scene = nullptr;
        // this->scene = scene;
    }
}

void SceneManager::render(){
    if(this->scene){
        this->scene->render();
    }
}

void SceneManager::handle_events(SDL_Event* event){
    if(this->scene){
        this->scene->handle_events(event);
    }
}

void SceneManager::update(){
    if(this->scene){
        this->scene->update();
    }
}
