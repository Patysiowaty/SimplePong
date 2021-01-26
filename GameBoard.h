#pragma once
#include "Ball.h"
#include "Paddle.h"

namespace Model {
class GameBoard {
 public:
  GameBoard();
  ~GameBoard();

  void InitializeBoard(Model::Paddle* player, Model::Paddle* enemy, Model::Ball *ball);
  bool Play();
  void ResetGame();

  private:
  void PlaceObjects();

 private:
  Model::Paddle* player_ = {nullptr};
  Model::Paddle* enemy_ = {nullptr};
  Model::Ball* ball_ = {nullptr};
};
}  // namespace Model
