#include "mdpc.hpp"
#include "game.hpp"

/** @mainpage
 * This is an exercise to learn C++ while trying to see if my puzzle concept
 * would actually work. This is take 2 of the attempt and will be re-written in
 * SDL2.
 */

// Main function duh!
// This function should handle arguments and options spawn a game object
int main ( int argc, char * argv[] )
{
    Game * game_instance = new Game ();
    std::cout << "quit_game = " << game_instance->get_quit_game() << std::endl;
    delete (game_instance);
    return 0;
}
