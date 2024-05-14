#include "game_management.h"

int main(int argc,char* argv[]){
    game_management game;
    game.init("Chicken Invaders");
    game.menu("Start");
    while (game.get_running())
    {
        game.handle_event();
        game.handle_game();
    }
    game.clean();
    return 0;
}
