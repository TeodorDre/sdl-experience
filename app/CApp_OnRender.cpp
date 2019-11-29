//
// Created by Andrew Slesarenko on 2019-11-28.
//

#include "./../CApp.h"
#include "./CSurface/CSurface.h"

void CApp::OnRender() {
    CSurface::OnDraw(Surf_Display, Surf_Test, 0, 0);

    SDL_Flip(Surf_Display);
}


