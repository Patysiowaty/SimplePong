#pragma once
#include "Listener.h"
#include "Window.h"
namespace Controller {

class WindowController : public Listener {
 public:
  WindowController(Model::Window* window);

  void HandleEvent(SDL_Event& event) override;
  void Draw(SDL_Texture* texture);

 private:
  Model::Window* window_ = {nullptr};
};
}  // namespace Controller
