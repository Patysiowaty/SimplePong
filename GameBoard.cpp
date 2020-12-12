#include "GameBoard.h"

#include <stdexcept>
namespace Model {
GameBoard::GameBoard(Player& player, Enemy& enemy, Ball& ball)
    : player_{player}, enemy_{enemy}, ball_{ball} {}

GameBoard::~GameBoard() {}

void GameBoard::InitializeGame() {
  player_.SetObjectPosition(kPlayerStartPos_);
  enemy_.SetObjectPosition(kEnemyStartPos_);
  ball_.SetObjectPosition(kBallStartPost_);
}

Player& GameBoard::GetPlayer() { return player_; }

void GameBoard::MovePlayer(MoveDirection direction) {
  if (direction == MoveDirection::kDown) {
    auto current_player_pos = player_.GetObjectPosition();
    if (current_player_pos.y -= 1 < 0) return;
    player_.MoveDown();
  } else if (direction == MoveDirection::kUp) {
    auto current_player_pos = player_.GetObjectPosition();
    if (current_player_pos.y += 1 > kBoardWidth_) return;
    player_.MoveUp();
  } else
    throw std::invalid_argument{"Illegal move!"};
}

int32_t GameBoard::GetBoardWidth() { return kBoardWidth_; }

int32_t GameBoard::GetBoardHeight() { return kBoardHeight_; }

bool GameBoard::Play() {


    return false; }

void GameBoard::ResetGame() {
  player_.SetObjectPosition(kPlayerStartPos_);
  enemy_.SetObjectPosition(kEnemyStartPos_);
  ball_.SetObjectPosition(kBallStartPost_);
}
}  // namespace Model
