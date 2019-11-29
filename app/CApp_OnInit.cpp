//
// Created by Andrew Slesarenko on 2019-11-28.
//

#include "./../CApp.h"
#include "./../app/CSurface/CSurface.h"
#include "SDL/SDL.h"

bool CApp::OnInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if ((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == nullptr) {
        return false;
    }

    if ((Surf_Test = CSurface::OnLoad("image.bmp")) == nullptr) {
        return false;
    }

    return true;
}
