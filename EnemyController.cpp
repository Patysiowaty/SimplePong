#include "EnemyController.h"
namespace Controller {
EnemyController::EnemyController() {}

EnemyController::~EnemyController() {}

MoveDirection EnemyController::GetEnemyNextMove() const {
  return enemy_direction_;
}

void EnemyController::MakeEnemyMove() { 



	OnChanged(this);
}

void EnemyController::IncreaseHandicap() { handicap += kHandicapFactor; }
}  // namespace Controller
