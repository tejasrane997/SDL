#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
//#include <SSDL2/DL_timer.h>

class Game
{
public:
	bool Initialize();
	bool UpdateScreen();
	void Close();

private:
	SDL_Window * window = nullptr;
	SDL_Surface * screenSurface = nullptr;	
	SDL_Surface * skySurface = nullptr;
};
