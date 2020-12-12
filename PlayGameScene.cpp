#include "PlayGameScene.h"

namespace Model {

PlayGameScene::PlayGameScene(View::Renderer& renderer)
    : game_board_{player_, enemy_, ball_},
      player_view_{renderer},
      enemy_view_{renderer},
      ball_view_{renderer} {}

PlayGameScene::~PlayGameScene() {}

void PlayGameScene::LoadScene() {
  InitializeModels();
  InitializeViews();
  RegisterListeners();
}

void PlayGameScene::UpdateScene() {
  // game_board_.Play();
  player_view_.Render();
  enemy_view_.Render();
  ball_view_.Render();
}

void PlayGameScene::DestroyScene() {}

void PlayGameScene::InitializeModels() {
  player_.GetSurface().SetSurfaceDestination("Assets/Player.png");
  player_.GetSurface().LoadSurface();
  player_.SetObjectSize(50, 150);
  enemy_.GetSurface().SetSurfaceDestination("Assets/Enemy.png");
  enemy_.GetSurface().LoadSurface();
  enemy_.SetObjectSize(50, 150);
  ball_.GetSurface().SetSurfaceDestination("Assets/Ball.png");
  ball_.GetSurface().LoadSurface();
  ball_.SetObjectSize(50, 50);

  game_board_.InitializeGame();
}

void PlayGameScene::InitializeViews() {
  player_view_.InitializeView(player_);
  enemy_view_.InitializeView(enemy_);
  ball_view_.InitializeView(ball_);
}

void PlayGameScene::RegisterListeners() {
  player_.AddListener(&player_view_);
  enemy_.AddListener(&enemy_view_);
  ball_.AddListener(&ball_view_);
}

}  // namespace Model
