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

  Player& GetPlayer();

  void MovePlayer(MoveDirection direction);
  int32_t GetBoardWidth();
  int32_t GetBoardHeight();

  bool Play();

  void ResetGame();

 private:
  const int32_t kBoardWidth_ = 1280;
  const int32_t kBoardHeight_ = 600;

  SDL_Rect board_ = {0, 0, kBoardWidth_, kBoardHeight_};

  const SDL_Point kPlayerStartPos_ = {10, kBoardHeight_ / 2};
  const SDL_Point kEnemyStartPos_ = {kBoardWidth_ - 40, kBoardHeight_ / 2};
  const SDL_Point kBallStartPost_ = {kBoardWidth_ / 2, kBoardHeight_ / 2};

  Player& player_;
  Enemy& enemy_;
  Ball& ball_;
};
}  // namespace Model
