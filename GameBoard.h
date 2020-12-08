#pragma once
#include "Ball.h"
#include "Enemy.h"
#include "MoveDirection.h"
#include "Player.h"
namespace Model {
class GameBoard {
 public:
  GameBoard(Player& player, Enemy& enemy, Ball& ball);
  ~GameBoard();

  void InitializeGame();

  Player& GetPlayer() const;

  void MovePlayer(MoveDirection direction);
  int32_t GetBoardWidth();
  int32_t GetBoardHeight();

 private:
  const int32_t kBoardWidth_ = 100;
  const int32_t kBoardHeight_ = 40;

  const SDL_Point kPlayerStartPos_ = {kBoardWidth_ - 90, kBoardHeight_ / 2};
  const SDL_Point kEnemyStartPos_ = {kBoardWidth_ - 10, kBoardHeight_ / 2};
  const SDL_Point kBallStartPost_ = {kBoardWidth_ / 2, kBoardHeight_ / 2};

  Player& player_;
  Enemy& enemy_;
  Ball& ball_;
};
}  // namespace Model
