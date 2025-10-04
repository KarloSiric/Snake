#ifndef STRUCTS_H
#define STRUCTS_H 


#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_error.h>


typedef struct {

    SDL_Renderer *renderer;
    SDL_Window   *window;
    
} t_App;







#endif
