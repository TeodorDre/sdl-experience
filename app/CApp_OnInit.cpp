//
// Created by Andrew Slesarenko on 2019-11-28.
//

#include "./../CApp.h"

bool CApp::OnInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if ((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == nullptr) {
        return false;
    }

    return true;
}
