
#include "GamePlay.h"
// #include "MainMenu.h"

void GamePlay::render(){
    cout << "render from GamePlay\n";
}  

void GamePlay::handle_events(SDL_Event* event){
    cout << "handle_event" << event << "from render from GamePlay\n";
    if(event->type == SDL_EVENT_KEY_DOWN){
        if(event->key.key == SDLK_LEFT){
            cout << "right press\n";
            // scene_manager->changeScene(new MainMenu());
        }
    }
}

void GamePlay::update(){
    cout << "update from GamePlay\n";
}
