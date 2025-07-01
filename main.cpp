#include <string>
#include <stdio.h>

#include <window.hpp>
#include <engine.hpp>

// sdl
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>


int main(int argc, char* argv[])
{
  Gock11::Engine* engine = new Gock11::Engine();
  engine->init(10, 10, 800, 600);
  
  while (engine->getRunning())
    {
      SDL_Event event;
      while (SDL_PollEvent(&event))
	{
	  switch (event.type)
	    {
	    case SDL_KEYDOWN:
	      if (event.key.keysym.sym >= 33 && event.key.keysym.sym <= 126) {
		printf("key: %c\n", (char)event.key.keysym.sym);
	      }
	      break;
	    case SDL_QUIT:
	      engine->setRunning(false);
	      break;
	    }
	}
    }
  
  return 0;
}
