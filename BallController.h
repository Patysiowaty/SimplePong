#pragma once
#include <SDL.h>

#include <cstdint>

#include "GameComponent.h"
#include "MoveDirection.h"
namespace Controller {
class BallController : public GameComponent {
 public:
  BallController();

  void onPlayerHit();
  void onWallHit();
  void onEnemyHit();
  void InitMove();

  void MoveBall(MoveDirection direction);

 private:
  SDL_Point position_ = {0, 0};
  float ball_velocity_ = {1.0f};
  MoveDirection last_direction_ = MoveDirection::kNone;
};
}  // namespace Controller
