#include "Controller.h"

Controller::Controller::Controller(Model::GameEngine& game, View::View& view)
    : game_{game}, view_{view} {}

void Controller::Controller::Initialize() {}

void Controller::Controller::GetEvent() {
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

void Controller::Controller::OnQuit() {}

void Controller::Controller::PassObjectToRender() {
  view_.GetObjects(game_.GetCurrentScene().GetSceneObjects());
}
