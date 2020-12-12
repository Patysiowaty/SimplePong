#pragma once
#include <vector>

#include "Enemy.h"
#include "GameBoard.h"
#include "ModelView.h"
#include "Player.h"
#include "Scene.h"

namespace Model {
class PlayGameScene : public Scene {
 public:
  PlayGameScene(View::Renderer& renderer);
  ~PlayGameScene();
  void LoadScene() override;
  void UpdateScene() override;
  void DestroyScene() override;

 private:
  void InitializeModels();
  void InitializeViews();
  void RegisterListeners();

 private:
  GameBoard game_board_;
  Player player_;
  Enemy enemy_;
  Ball ball_;

  View::ModelView player_view_;
  View::ModelView enemy_view_;
  View::ModelView ball_view_;
};
}  // namespace Model
