#include "WindowController.h"
namespace Controller {

WindowController::WindowController(Model::Window* window) : window_{window} {}

void WindowController::HandleEvent(SDL_Event& passed_event) {
  switch (passed_event.window.event) {
    case SDL_WINDOWEVENT_CLOSE: {
      window_->DestroyWindow();
      printf("Window destroyed\n");
      break;
    }
    case SDL_WINDOWEVENT_SIZE_CHANGED: {
      window_->ResizeWindow(
          SDL_Rect{0, 0, passed_event.window.data1, passed_event.window.data2});
      printf("Window resized: %d %d\n", passed_event.window.data1,
             passed_event.window.data2);
      break;
    }
    case SDL_WINDOWEVENT_MOVED: {
      window_->ChangePosition(
          SDL_Rect{passed_event.window.data1, passed_event.window.data2, 0, 0});
      printf("Window moved: %d %d\n", passed_event.window.data1,
             passed_event.window.data2);
      break;
    }
    default:
      break;
  }
}
void WindowController::Draw(SDL_Texture* texture) {
  window_->DrawTexture(texture);
}
}  // namespace Controller
