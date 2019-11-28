//
// Created by Andrew Slesarenko on 2019-11-28.
//

#include "./../CApp.h"
#include "SDL/SDL.h"

void CApp::OnEvent(SDL_Event *Event) {
    if (Event->type == SDL_QUIT) {
        Running = false;
    }
}
