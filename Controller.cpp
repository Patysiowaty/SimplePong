#include "Controller.h"
namespace Controller {
Controller::Controller(Model::Scene& scene, View::View& view)
    : scene_{scene}, view_{view} {}

void Controller::Initialize() {}

void Controller::GetEvent() {
  SDL_Event user_event_;

  if (SDL_PollEvent(&user_event_)) {
    switch (user_event_.type) {
      case SDL_QUIT: {
        exit(0);
        break;
      }
      default:
        break;
    }
  }
}
}  // namespace Controller