#include <iostream>
#include <string>
#include "CApp.h"

CApp::CApp() {
    Surf_Display = nullptr;

    Running = true;
}

int CApp::onExecute() {
    if (OnInit() == false) {
        return -1;
    }

    SDL_Event Event;

    while (Running) {
        while (SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}

