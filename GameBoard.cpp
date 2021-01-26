#include "GameBoard.h"

#include "Config.h"
namespace Model {
GameBoard::GameBoard() {}

GameBoard::~GameBoard() {}

void GameBoard::InitializeBoard(Model::Paddle* player, Model::Paddle* enemy,
                                  Model::Ball* ball) {
  player_ = {player};
  enemy_ = {enemy};
  ball_ = {ball};
}

bool GameBoard::Play() { return true; }

void GameBoard::ResetGame() {}

void GameBoard::PlaceObjects() {
  player_->SetObjectPosition(Config::kPlayerStartPos);
  enemy_->SetObjectPosition(Config::kEnemyStartPos);
  ball_->SetObjectPosition(Config::kBallStartPos);
}

}  // namespace Model
