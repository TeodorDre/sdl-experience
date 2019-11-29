
1. Build index.js and index.wasm:

    ```emcc core.cpp -s WASM=1 -s USE_SDL=2 -O3 -o index.js```
2. 
```
emcc main.cpp CApp.cpp app/CApp_OnCleanup.cpp app/CApp_OnEvent.cpp app/CApp_OnInit.cpp app/CApp_OnLoop.cpp app/CApp_OnRender.cpp app/CSurface/CSurface.cpp -s WASM=1 -s EXIT_RUNTIME=1 -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s STB_IMAGE=1 -s USE_SDL_IMAGE=1 -s USE_SDL=1 -s -lSDL  --use-preload-plugins  -o index.js 
```