//
// Created by Andrew Slesarenko on 2019-11-28.
//

#include "./../CApp.h"
#include "SDL/SDL.h"

void CApp::OnCleanup() {
    SDL_FreeSurface(Surf_Test);
    SDL_FreeSurface(Surf_Display);

    SDL_Quit();
}

