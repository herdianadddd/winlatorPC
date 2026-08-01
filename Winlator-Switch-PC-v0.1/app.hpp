#pragma once

#include <SDL2/SDL.h>


class App
{

public:

bool init();

void loop();

void shutdown();


private:

SDL_Window* window=nullptr;

SDL_Renderer* renderer=nullptr;

bool running=true;


};
