
#include "game.h" 
 
int main(int argc, char *argv[])
{
	Game newGame;

	newGame.initialize();

        newGame.updateScreen();
 
    while (1)
        ;
 
    return 0;
}
