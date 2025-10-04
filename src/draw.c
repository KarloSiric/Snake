/*======================================================================
 *  File: draw.c
 *  Project: Snake
 *  Author: karlosiric <email@example.com>
 *  Created: 2025-10-04 15:53:33
 *  Last Modified by: karlosiric
 *  Last Modified: 2025-10-04 15:56:00
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
#include "structs.h"
#include <SDL2/SDL_render.h>

static t_App app;

void prepareScence(void) {


    SDL_SetRenderDrawColor(app.renderer, 96, 128, 255, 255);
    SDL_RenderClear(app.renderer);

}

void presentScene(void) {

    SDL_RenderPresent(app.renderer);
}
