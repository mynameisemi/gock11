#pragma once

#include <window.hpp>

namespace Gock11
{
  class Engine
  {
  public:
    Engine();

    // init, starts window
    void init(uint x, uint y, uint w, uint h);
    
    // event loop
    void startEventLoop();
    
    bool getRunning() { return isRunning; }
    void setRunning(bool value) { isRunning = value; }
    
    GockWindow* getWindow() { return window; }
  private:
    bool isRunning;
    GockWindow* window;
  };
}
