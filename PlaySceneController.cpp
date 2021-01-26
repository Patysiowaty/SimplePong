#include "PlaySceneController.h"
namespace Controller {

PlaySceneController::PlaySceneController() {}

void PlaySceneController::SetPlayScene(Model::PlayGameScene* scene) {
  scene_ = {scene};
}

void PlaySceneController::HandleEvent(SDL_Event& event) {
  if (event.type == SDL_WINDOWEVENT)
    WindowEvent(event);
  else if (event.type == SDL_KEYDOWN)
    SceneEvent(event);
}

void PlaySceneController::WindowEvent(SDL_Event& event) {
  switch (event.window.event) {
    case SDL_WINDOWEVENT_CLOSE: {
      scene_->QuitGame();
      break;
    }
    default:
      break;
  }
}

void PlaySceneController::SceneEvent(SDL_Event& event) {
  scene_->GetPlayerController().HandleEvent(event);
}
}  // namespace Controller