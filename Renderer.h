#pragma once
#include <SDL.h>

#include "Window.h"
namespace View {

class Renderer {
 public:
  Renderer(Window& window);
  ~Renderer();

  void Initialize();

  SDL_Renderer* GetRenderer();

 private:
  SDL_Renderer* renderer_ = {nullptr};
  Window& window_;
};
}  // namespace View
