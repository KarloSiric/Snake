/*======================================================================
 *  File: draw.c
 *  Project: Snake
 *  Author: karlosiric <email@example.com>
 *  Created: 2025-10-04 15:53:33
 *  Last Modified by: karlosiric
 *  Last Modified: 2025-10-05 01:12:16
 *----------------------------------------------------------------------
 *  Description:
 *      
 *----------------------------------------------------------------------
 *  License: 
 *  Company: 
 *  Version: 0.1.0
 *======================================================================
 */



#include "draw.h"
#include "game_config/config.h"
#include "structs.h"
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>

void prepareScene(void) {


    SDL_SetRenderDrawColor(app.renderer, 96, 128, 255, 255);
    SDL_RenderClear(app.renderer);
}

void presentScene(void) {

    SDL_RenderPresent(app.renderer);
}


int draw_grid(SDL_Renderer *renderer) {

    SDL_SetRenderDrawColor(app.renderer, 40, 40, 40, 255);

    for (int i = 0; i < ROWS; i++) {
        int y = i * CELL_SIZE;
        SDL_RenderDrawLine(app.renderer, 0, y, COLUMNS * CELL_SIZE, y);
    }

    for (int j = 0; j < COLUMNS; j++) {
        int x = j * CELL_SIZE;
        SDL_RenderDrawLine(app.renderer, x, 0, x, ROWS * CELL_SIZE);
    }

    return (0);
}
