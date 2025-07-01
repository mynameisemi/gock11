#include <engine.hpp>

namespace Gock11
{
  Engine::Engine()
  {
    GockWindow* w = new GockWindow();
    window = w;
  }

  void Engine::init(uint x, uint y, uint w, uint h)
  {
    SDL_Init(SDL_INIT_VIDEO); 
    window->init(x, y, w, h);
  }
}
