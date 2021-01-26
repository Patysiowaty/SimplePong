#include "PlayGameScene.h"

namespace Model {

PlayGameScene::PlayGameScene() {}

PlayGameScene::~PlayGameScene() {}

void PlayGameScene::LoadScene() {
  player_.SetObjectSize(Config::kPlayerIconSize);
  player_.CreateObjectIcon(Config::kPlayerIconPath);
  enemy_.SetObjectSize(Config::kEnemyIconSize);
  enemy_.CreateObjectIcon(Config::kEnemyIconPath);
  ball_.SetObjectSize(Config::kBallIconSize);
  ball_.CreateObjectIcon(Config::kBallIconPath);
  player_controller_.SetPlayer(&player_);
  game_board_.InitializeBoard(&player_, &enemy_, &ball_);
}

void PlayGameScene::UpdateScene() {
  if (!game_board_.Play()) game_board_.ResetGame();
}

void PlayGameScene::DestroyScene() {}

Controller::PlayerController& PlayGameScene::GetPlayerController() {
  return player_controller_;
}

}  // namespace Model
