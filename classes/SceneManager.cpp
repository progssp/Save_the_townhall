#include "SceneManager.h"

Scene* SceneManager::scene = nullptr;

void SceneManager::changeScene(Scene* new_scene){    
    // cout << "scene address: " << this->scene << "\n";
    // this->scene.reset();
    // this->scene = std::move(new_scene);
    if(scene != nullptr){
        cout << "scene is not null from scene manager: changescene\n";
        delete scene;
        scene = nullptr;
        if(scene != nullptr){
            cout << "scene is not null after delete from scene manager: changescene\n";
        }
        else{
            cout << "scene is null after del from scene manager: changescene\n";
            scene = new_scene;
            cout << "scene is updated after del from scene manager: changescene\n";
        }
        // this->scene = std::move(scene);
    }
    else{
        cout << "scene is null from scene manager: changescene\n";
        // this->scene = nullptr;
        scene = new_scene;
        cout << "scene is updated from scene manager: changescene\n";
    }
}

void SceneManager::render(){
    if(scene != nullptr){
        scene->render();
    }
    else{
        cout << "scene is null from scene manager: render\n";
    }
}

void SceneManager::handle_events(SDL_Event* event){
    if(scene != nullptr){
        scene->handle_events(event);
    }
    else{
        cout << "scene is null\n";
    }
}

void SceneManager::update(){
    if(scene != nullptr){
        scene->update();
    }
    else{
        cout << "scene is null\n";
    }
}
