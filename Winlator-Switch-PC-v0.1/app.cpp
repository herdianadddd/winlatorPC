#include "app.hpp"

#include <iostream>


bool App::init()
{

SDL_Init(SDL_INIT_VIDEO);


window =
SDL_CreateWindow(
"Winlator Switch PC v0.1",
SDL_WINDOWPOS_CENTERED,
SDL_WINDOWPOS_CENTERED,
1280,
720,
0
);


renderer =
SDL_CreateRenderer(
window,
-1,
0
);


return true;

}



void App::loop()
{

SDL_Event event;


while(running)
{


while(SDL_PollEvent(&event))
{

if(event.type==SDL_QUIT)
running=false;


if(event.type==SDL_KEYDOWN)
{

if(event.key.keysym.sym==SDLK_ESCAPE)
running=false;


if(event.key.keysym.sym==SDLK_RETURN)
{
std::cout
<<"Create Container\n";
}


}

}



SDL_SetRenderDrawColor(
renderer,
20,
20,
20,
255
);


SDL_RenderClear(renderer);


SDL_RenderPresent(renderer);


SDL_Delay(16);


}


}



void App::shutdown()
{

SDL_DestroyRenderer(renderer);

SDL_DestroyWindow(window);

SDL_Quit();

}
