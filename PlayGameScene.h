#pragma once
#include <vector>

#include "Enemy.h"
#include "GameBoard.h"
#include "Player.h"
#include "Scene.h"

namespace Model {
class PlayGameScene : public Scene {
 public:
  PlayGameScene();
  ~PlayGameScene();
  void LoadScene() override;
  void UpdateScene() override;
  void DestroyScene() override;

 private:
  GameBoard game_board_;
  Player player_;
  Enemy enemy_;
  Ball ball_;
};
}  // namespace Model
