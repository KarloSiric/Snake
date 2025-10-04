#ifndef DRAW_H
#define DRAW_H 

#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>


void prepareScene(void);

void presentScene(void);

int draw_grid(SDL_Renderer *renderer);


#endif
