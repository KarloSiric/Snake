/*
* @Author: karlosiric
* @Date:   2025-09-16 21:36:13
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-17 09:40:22
*/

#include "game_config/config.h"
#include <SDL2/SDL_timer.h>
#include <stdio.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL.h>



int main( int argc, char const *argv[] )
{

    SDL_Window *window = NULL;
   
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) 
    {
        printf( "SDL Could not initialize! SDL Error: %s\n", SDL_GetError() );
    }

    window = SDL_CreateWindow("Classic Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                             WIDTH, HEIGHT, 0);

    SDL_Delay(5000);
    




}

    



    



    





    





    







    return 0;
}

