#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

// window.hpp
// handles all SDL window init and event loop.
namespace Gock11
{
  class GockWindow
  {
  public:
    GockWindow();

    int getX() { return x; }
    int getY() { return y; }

    int getW() { return w; }
    int getH() { return h; }

    void setX(int val) { x = val; }
    void setY(int val) { y = val; }
    
    void setW(int val) { w = val; }
    void setH(int val) { h = val; }
    
    void init(int x, int y, int w, int h);
  private:
    // pos rel to screen
    uint x;
    uint y;

    // window dimensions
    uint w;
    uint h;
    
    SDL_Window* window;
  };
}
