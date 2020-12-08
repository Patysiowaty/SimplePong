#pragma once
#include <vector>

#include "Enemy.h"
#include "GameBoard.h"
#include "GameObject.h"
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

  std::vector<GameObject> GetSceneObjects() const;

 private:
  std::vector<GameObject> scene_objects_;
  GameBoard game_board_;
  Player player_ = {"Assets/Player.png", {0, 0}, {0, 0, 50, 150}};
  Enemy enemy_ = {"Assets/Enemy.png", {0, 0}, {0, 0, 50, 150}};
  Ball ball_ = {"Assets/Ball.png", {0, 0}, {0, 0, 50, 50}};
};
}  // namespace Model
