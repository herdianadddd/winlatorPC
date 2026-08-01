#include "renderer.hpp"


SDL_Window*
Renderer::window;


SDL_Renderer*
Renderer::renderer;



bool Renderer::init()
{

SDL_Init(
SDL_INIT_VIDEO |
SDL_INIT_GAMECONTROLLER
);


window =
SDL_CreateWindow(
"Winlator Switch v0.1",
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



void Renderer::draw()
{

SDL_RenderClear(renderer);


SDL_RenderPresent(renderer);

}



void Renderer::exit()
{

SDL_DestroyRenderer(renderer);

SDL_DestroyWindow(window);

SDL_Quit();

}
