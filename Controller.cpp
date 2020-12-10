#include "Controller.h"
namespace Controller {
Controller::Controller(Model::GameEngine& game, View::View& view)
    : game_{game}, view_{view} {}

void Controller::Initialize() {}

void Controller::GetEvent() {
  SDL_Event user_event_;

  if (SDL_PollEvent(&user_event_)) {
    switch (user_event_.type) {
      case SDL_QUIT: {
        game_.SetQuit();
        break;
      }
      default:
        break;
    }
  }
}

void Controller::OnQuit() {}
}  // namespace Controller