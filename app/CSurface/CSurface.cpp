//
// Created by Andrew Slesarenko on 29/11/2019.
//

#ifdef EMSCRIPTEN
#include <stdio.h>
  #define SDL_DisplayFormat SDL_DisplayFormatAlpha
#endif

#include "CSurface.h"
#include "SDL/SDL.h"

CSurface::CSurface() {}

SDL_Surface *CSurface::OnLoad(char *File) {
    SDL_Surface *Surf_Temp = nullptr;
    SDL_Surface *Surf_Return = nullptr;

    if ((Surf_Temp = SDL_LoadBMP(File)) == nullptr) {
        return nullptr;
    }

    Surf_Return = SDL_DisplayFormat(Surf_Temp);
    SDL_FreeSurface(Surf_Temp);

    return Surf_Return;
}

bool CSurface::OnDraw(SDL_Surface *Surf_Dest, SDL_Surface *Surf_Src, int X, int y) {
    if (Surf_Dest == nullptr || Surf_Src == nullptr) {
        return false;
    }

    SDL_Rect DestR;

    DestR.x = X;
    DestR.y = y;

    SDL_BlitSurface(Surf_Src, nullptr, Surf_Dest, &DestR);

    return true;
}
