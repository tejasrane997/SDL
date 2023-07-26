#include <Game.h>

bool Game::Initialize()
{
	//Initialize SDL
	if ( SDL_Init(SDL_INIT_EVERYTHING) != 0){
		printf("SDL could not Initialized! SDL Error : %s\n", SDL_GetError());
		return false;
	}

	//Create windows
	window = SDL_CreateWindow("GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, SDL_WINDOW_SHOWN);
        if(!window){
		printf("Failed to create window! SDL Error : %s\n", SDL_GetError());
		return false;
	}	

	//Get window surface
	screenSurface = SDL_GetWindowSurface(window);

	return true;
}

bool Game::UpdateScreen()
{
	//Load image
	skySurface = SDL_LoadBMP("./content/blue.bmp");
	if(!skySurface){
		printf("Failed to load BMP! SDL Error : %s\n", SDL_GetError());
		return false;
	}

	//Apply image
	SDL_BlitSurface(skySurface, nullptr, screenSurface, nullptr);

	//update window surface
	SDL_UpdateWindowSurface(window);

	return true;
}

void Game::Close()
{
	//Free window surface
	SDL_FreeSurface(screenSurface);
	screenSurface = nullptr;

	//Destroy window
	SDL_DestroyWindow(window);
	window = nullptr;

	//Quit SDL
	SDL_Quit();
}
