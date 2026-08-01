#pragma once

#include <SDL2/SDL.h>


class Renderer
{

public:

static bool init();

static void draw();

static void exit();


private:

static SDL_Window* window;

static SDL_Renderer* renderer;


};
