#pragma once
#include "Config.h"
#include "GameBoard.h"
#include "PlayerController.h"
#include "Scene.h"

namespace Model {
class PlayGameScene : public Scene {
 public:
  PlayGameScene();
  ~PlayGameScene();
  void LoadScene() override;
  void UpdateScene() override;
  void DestroyScene() override;

  Controller::PlayerController& GetPlayerController();

 private:
  Model::Paddle player_;
  Model::Paddle enemy_;
  Model::Ball ball_;
  Model::GameBoard game_board_;

  Controller::PlayerController player_controller_;
};
}  // namespace Model
