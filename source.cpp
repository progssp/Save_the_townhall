#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <SDL3/SDL.h>

#include "classes/SceneManager.h"
#include "classes/game_windows/MainMenu.h"
#include "classes/game_windows/GamePlay.h"

using namespace std;

SDL_Window* window;
SDL_Renderer* renderer;

bool window_open = true;


int main(int argc, char* agrv[]){

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_AUDIO);

    window = SDL_CreateWindow("Save The Townhall",1024,768,SDL_WINDOW_HIGH_PIXEL_DENSITY);

    renderer = SDL_CreateRenderer(window,NULL);

    SceneManager::changeScene(new MainMenu());

    while(window_open){
    
        SDL_Event event;
        
        while(SDL_PollEvent(&event)){

            if(event.type == SDL_EVENT_QUIT){
                window_open = false;
            }
            else{
                SceneManager::handle_events(&event);
            }
        }

      

        // rendering code
        SDL_SetRenderDrawColor(renderer,230,230,230,255);
        SDL_RenderClear(renderer);

        SceneManager::render();
        SceneManager::update();
      
       
        SDL_RenderPresent(renderer);

    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;

}