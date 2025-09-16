/*
* @Author: karlosiric
* @Date:   2025-09-16 21:36:13
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-09-16 22:52:54
*/


#include <stdio.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL.h>





const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;





int main( int argc, char const *argv[] )
{

    SDL_Window *window = NULL;
   
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) 
    {

        printf( "SDL Could not initialize! SDL Error: %s\n", SDL_GetError() );

    }
    
    







    return 0;
}

