#ifndef GAME_H
#define GAME_H

#include "mdpc.hpp"

class Game
{
    public:
        /** Constructor */
        Game ();
        /** Destructor */
        ~Game ();
        /** Function that returns the game state */
        bool get_quit_game ();

    private:
        bool quit_game;
        SDL_Surface * init_game_screen ();
        SDL_Surface * game_screen;
};

#endif
