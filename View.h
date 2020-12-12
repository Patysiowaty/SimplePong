#pragma once
#include <SDL_image.h>

#include <vector>

#include "GameObject.h"
#include "MainMenu.h"
#include "Renderer.h"
#include "Texture.h"
#include "Window.h"

namespace View {
class View {
 public:
  View();
  ~View();

  void Initialize();
  void Render();

  Window& GetWindow();
  Renderer& GetRenderer();

 private:
  Window window_;
  Renderer renderer_;
};
}  // namespace View
