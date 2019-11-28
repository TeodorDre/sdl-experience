
1. Build index.js and index.wasm:

    ```emcc core.cpp -s WASM=1 -s USE_SDL=2 -O3 -o index.js```
2. 
```
emcc main.cpp CApp.cpp app/CApp_OnCleanup.cpp app/CApp_OnEvent.cpp app/CApp_OnInit.cpp app/CApp_OnLoop.cpp app/CApp_OnRender.cpp -s WASM=1 -s EXIT_RUNTIME=1 -o index.js
```