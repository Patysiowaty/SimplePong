#pragma once

#include "MainMenu.h"
#include "PlayGameScene.h"
#include "Scene.h"
namespace Model {
class GameEngine {
 public:
  GameEngine();
  ~GameEngine();

  void Initialize();

  void Update();

  bool IsRunning();

  void SetQuit();

 private:
  bool is_run_ = {false};

  Scene* current_scene_ = {nullptr};
};
}  // namespace Model
