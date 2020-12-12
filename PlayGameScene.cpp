#include "PlayGameScene.h"

namespace Model {

PlayGameScene::PlayGameScene() : game_board_{player_, enemy_, ball_} {}

PlayGameScene::~PlayGameScene() {}

void PlayGameScene::LoadScene() {
  player_.GetSurface().SetSurfaceDestination("Assets/Player.png");
  player_.GetSurface().LoadSurface();
  enemy_.GetSurface().SetSurfaceDestination("/Assets/Enemy.png");
  enemy_.GetSurface().LoadSurface();
  ball_.GetSurface().SetSurfaceDestination("/Assets/Ball.png");
  ball_.GetSurface().LoadSurface();
  game_board_.InitializeGame();
}

void PlayGameScene::UpdateScene() {}

void PlayGameScene::DestroyScene() {}

}  // namespace Model
