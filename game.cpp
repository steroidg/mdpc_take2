#include "game.hpp"

Game::Game ()
{
    quit_game = false;
    game_screen = NULL;
    game_screen = init_game_screen ();
}

Game::~Game ()
{
    SDL_Quit();
}

bool Game::get_quit_game ()
{
    return quit_game;
}

SDL_Surface * Game::init_game_screen ()
{
    if ( SDL_Init ( SDL_INIT_EVERYTHING ) < 0 ) {
        cout << __PRETTY_FUNCTION__ << " "
             << __LINE__ << " "
             << "ERROR: failed to init SDL."
             << endl;
        return NULL;
    }
}
