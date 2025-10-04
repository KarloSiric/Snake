/*======================================================================
 *  File: init.c
 *  Project: Snake
 *  Author: karlosiric <email@example.com>
 *  Created: 2025-10-03 14:49:22
 *  Last Modified by: karlosiric
 *  Last Modified: 2025-10-05 00:25:23
 *----------------------------------------------------------------------
 *  Description:
 *      
 *----------------------------------------------------------------------
 *  License: 
 *  Company: 
 *  Version: 0.1.0
 *======================================================================
 */


#include "game_config/config.h"
#include "structs.h"
#include "init.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_hints.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdlib.h>

t_App app = {0};

void initSDL(void) 
{

    int rendererFlags, windowFlags;

    rendererFlags = SDL_RENDERER_ACCELERATED;
    windowFlags = 0;

    if (SDL_Init(SDL_INIT_VIDEO < 0)) {
        printf("Couldn't initialize SDL: %s\n", SDL_GetError());
        exit(EXIT_SUCCESS);
    }

    app.window = SDL_CreateWindow("Classic Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                              WIDTH, HEIGHT, windowFlags);

    if (!app.window) {
        printf("Failed to open %d x %d window: %s\n", WIDTH, HEIGHT, SDL_GetError());
        exit(EXIT_SUCCESS);
    }

    app.renderer = SDL_CreateRenderer(app.window, -1, rendererFlags);

    if (!app.renderer) {
        printf("Failed to create renderer: %s\n", SDL_GetError());
        exit(EXIT_SUCCESS);
    }
}


void cleanup(void) {

    if (app.renderer) SDL_DestroyRenderer(app.renderer);
    if (app.window) SDL_DestroyWindow(app.window);
    SDL_Quit();
}
