
#include "MainMenu.h"
#include "GamePlay.h"
#include "../SceneManager.h"


void MainMenu::render(){
    cout << "render from main menu: render\n";
}  

void MainMenu::handle_events(SDL_Event* event){
    // cout << "handle_event" << event << "from render from main menu\n";
    if(event->type == SDL_EVENT_KEY_DOWN){
        if(event->key.key == SDLK_RIGHT){
            cout << "right pressed\n";
            SceneManager::changeScene(new GamePlay());
        }
    }
}

void MainMenu::update(){
    cout << "update from main menu\n";
}
