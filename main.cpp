#include <iostream>
#include <SDL.h>
/** @mainpage
 * This is an exercise to learn C++ while trying to see if my puzzle concept
 * would actually work. This is take 2 of the attempt and will be re-written in
 * SDL2.
 */

// Main function duh!
// This function should handle arguments and options spawn a game object
int main ( int argc, char * argv[] )
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    SDL_Quit();
    return 0;
}