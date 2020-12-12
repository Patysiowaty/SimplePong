#include "GameBoard.h"

#include <stdexcept>
namespace Model {
GameBoard::GameBoard(Player& player, Enemy& enemy, Ball& ball)
    : player_{player}, enemy_{enemy}, ball_{ball} {}

GameBoard::~GameBoard() {}

void GameBoard::InitializeGame() {
  player_.SetPosition(kPlayerStartPos_);
  enemy_.SetPosition(kEnemyStartPos_);
  ball_.SetPosition(kBallStartPost_);
}

Player& GameBoard::GetPlayer() { return player_; }

void GameBoard::MovePlayer(MoveDirection direction) {
  if (direction == MoveDirection::kDown) {
    auto current_player_pos = player_.GetPosition();
    if (current_player_pos.y -= 1 < 0) return;
    player_.MoveDown();
  } else if (direction == MoveDirection::kUp) {
    auto current_player_pos = player_.GetPosition();
    if (current_player_pos.y += 1 > kBoardWidth_) return;
    player_.MoveUp();
  } else
    throw std::invalid_argument{"Illegal move!"};
}

int32_t GameBoard::GetBoardWidth() { return kBoardWidth_; }

int32_t GameBoard::GetBoardHeight() { return kBoardHeight_; }

void GameBoard::ResetGame() {
  player_.SetPosition(kPlayerStartPos_);
  enemy_.SetPosition(kEnemyStartPos_);
  ball_.SetPosition(kBallStartPost_);
}
}  // namespace Model
