#pragma once
#include "PlayGameScene.h"
namespace Controller {
class PlaySceneController : public Listener {
 public:
  PlaySceneController();

  void SetPlayScene(Model::PlayGameScene* scene);

  void HandleEvent(SDL_Event& event) override;

 private:
  void WindowEvent(SDL_Event& event);
  void SceneEvent(SDL_Event& event);

 private:
  Model::PlayGameScene* scene_ = {nullptr};
};
}  // namespace Controller
