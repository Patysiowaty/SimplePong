#pragma once
#include <cstdint>
#include <memory>
#include <stack>
#include <string>

#include "MainMenu.h"
#include "PlayGameScene.h"
namespace Model {
class GameEngine {
 public:
  GameEngine();

  void Initialize();

  void Update();

  void OnQuit();

  const PlayGameScene& GetCurrentScene();

  bool IsRunning();

  void SetQuit();

 private:
  bool is_run_ = {false};
  // TODO: Make scene changer
  PlayGameScene play_game_;
};
}  // namespace Model
