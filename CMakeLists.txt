cmake_minimum_required(VERSION 3.12)

project(projectShell)

set(CMAKE_CXX_STANDARD 14)
if (${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")
    set(CMAKE_C_COMPILER "emcc")
endif ()

include_directories(/Users/teodordre/Documents/reps/C++/emsdk/upstream/emscripten/system/include)
add_executable(projectShell CApp.cpp main.cpp app/CApp_OnInit.cpp app/CApp_OnEvent.cpp app/CApp_OnLoop.cpp app/CApp_OnRender.cpp app/CApp_OnCleanup.cpp app/CSurface/CSurface.h app/CSurface/CSurface.cpp)
if (${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")
    set_target_properties(projectShell PROPERTIES LINK_FLAGS "-o
dist/projectShell.js -s USE_FREETYPE=1 -s DISABLE_EXCEPTION_CATCHING=0 -s DEMANGLE_SUPPORT=1 -s SAFE_HEAP=1 --bind -s WASM=1 -O2 -s LEGACY_GL_EMULATION=0  -s GL_UNSAFE_OPTS=0 --pre-js pre-module.js --post-js post-module.js -s ASSERTIONS=1 -s GL_ASSERTIONS=1 -s INVOKE_RUN=0  -std=c++11 -s USE_WEBGL2=1 -s FULL_ES3=1 -s USE_GLFW=3 -s OFFSCREENCANVAS_SUPPORT=1 --preload-file textures --preload-file shaders --preload-file fonts")
endif()