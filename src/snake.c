/*
* @Author: karlosiric
* @Date:   2025-09-16 21:36:13
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-17 09:40:22
*/

#include "init.h"
#include "structs.h"
#include "input.h"
#include "draw.h"
#include "game_config/config.h"
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main( int argc, char const *argv[] )
{

    t_App app;

    memset(&app, 0, sizeof(t_App));

    initSDL();
    atexit(cleanup);     


    while(1) {

        prepareScene();

        doInput();


        draw_grid(app.renderer);


        presentScene();
        SDL_Delay(16);

    }

    return 0;

}

