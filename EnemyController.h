#pragma once
#include "GameComponent.h"
#include "MoveDirection.h"
namespace Controller {
class EnemyController : public GameComponent {
 public:
  EnemyController();
  ~EnemyController();

  MoveDirection GetEnemyNextMove() const;
  void MakeEnemyMove();

 private:
  void IncreaseHandicap();

 private:
  const float kHandicapFactor = 0.1f;
  float handicap = 0.f;
  MoveDirection enemy_direction_ = MoveDirection::kNone;
};
}  // namespace Controller
