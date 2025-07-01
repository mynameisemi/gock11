#include <window.hpp>

namespace Gock11
{
  GockWindow::GockWindow()
  {
    //
  }

  void GockWindow::init(int x, int y, int w, int h)
  {
    this->setX(x);
    this->setY(y);
    this->setW(w);
    this->setH(h);

    window = SDL_CreateWindow("gock", 100, 100, 800, 600, SDL_WINDOW_OPENGL);
  }
}
