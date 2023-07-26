
#include "Game.h" 
 
int main(int argc, char *argv[])
{
	Game newGame;

	newGame.Initialize();

        newGame.UpdateScreen();
 
    while (1)
        ;
 
    return 0;
}
