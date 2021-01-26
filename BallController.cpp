#include "BallController.h"

#include <SDL.h>

#include <random>

namespace Controller {
BallController::BallController() {}

void BallController::onPlayerHit() {
  MoveBall(MoveDirection::kDown);
}

void BallController::onWallHit() {
  if (last_direction_ == MoveDirection::kDownLeft) {
    // MoveBall(MoveDirection::kUpLeft);
  } else if (last_direction_ == MoveDirection::kDownRight) {
    // MoveBall(MoveDirection::kUpRight);
  } else if (last_direction_ == MoveDirection::kUpRight) {
    // MoveBall(MoveDirection::kDownRight);
  } else if (last_direction_ == MoveDirection::kUpLeft) {
    // MoveBall(MoveDirection::kDownLeft);
  }
}

void BallController::onEnemyHit() {
  auto next_move = MoveDirection(std::rand() % 1 + 5);
}

void BallController::InitMove() {
}

void BallController::MoveBall(MoveDirection direction) {}
}  // namespace Controller