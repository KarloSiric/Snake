/*======================================================================
 *  File: input.c
 *  Project: Snake
 *  Author: karlosiric <email@example.com>
 *  Created: 2025-10-04 15:35:18
 *  Last Modified by: karlosiric
 *  Last Modified: 2025-10-04 16:15:49
 *----------------------------------------------------------------------
 *  Description:
 *      
 *----------------------------------------------------------------------
 *  License: 
 *  Company: 
 *  Version: 0.1.0
 *======================================================================
 */


#include "input.h"
#include <SDL2/SDL_events.h>
#include <stdlib.h>


void doInput() {


    SDL_Event event;

    while(SDL_PollEvent(&event)) {

        switch (event.type) {
            case SDL_QUIT:
                exit(EXIT_SUCCESS);
                break;

            default:
                break;

        }
    }
}




