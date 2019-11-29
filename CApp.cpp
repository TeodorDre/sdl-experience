#include "CApp.h"
#include "stdio.h"

CApp::CApp() {
    Surf_Display = nullptr;
    Surf_Test = nullptr;

    Running = true;
}

int CApp::onExecute() {
    if (!OnInit()) {
        return -1;
    }

    printf("Init");

    SDL_Event Event;

    OnRender();
    OnRender();

//    while (Running) {
//        while (SDL_PollEvent(&Event)) {
//            OnEvent(&Event);
//        }
//
//        OnLoop();
//        OnRender();
//    }

    OnCleanup();

    return 0;
}

