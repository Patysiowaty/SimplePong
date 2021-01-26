#include "Ball.h"

#include <stdexcept>
namespace Model {
Ball::Ball() {}

Ball::Ball(const SDL_FPoint& position, const SDL_FRect& size)
    : GameObject{position, size} {}

Ball::~Ball() {}

void Ball::Move(MoveDirection direction) {
  auto current_position = GetObjectPosition();
  switch (direction) {
    case MoveDirection::kUpLeft: {
      MoveUpLeft(current_position);
      break;
    }
    case MoveDirection::kDownLeft: {
      MoveDownLeft(current_position);
      break;
    }
    case MoveDirection::kUpRight: {
      MoveUpRight(current_position);
      break;
    }
    case MoveDirection::kDownRight: {
      MoveDownRight(current_position);
      break;
    }
    default:
      throw std::runtime_error{"Illegal ball move!"};
  }
}  // namespace Model

void Ball::AccelerateBall() { ball_velocity_ += kAccelerateFactor; }

void Ball::MoveDownLeft(SDL_FPoint position) {
  position.x -= kMoveFactor * ball_velocity_;
  position.y += kMoveFactor * ball_velocity_;
  SetObjectPosition(position);
}

void Ball::MoveDownRight(SDL_FPoint position) {
  position.x += kMoveFactor * ball_velocity_;
  position.y += kMoveFactor * ball_velocity_;
  SetObjectPosition(position);
}

void Ball::MoveUpLeft(SDL_FPoint position) {
  position.x -= kMoveFactor * ball_velocity_;
  position.y -= kMoveFactor * ball_velocity_;
  SetObjectPosition(position);
}

void Ball::MoveUpRight(SDL_FPoint position) {
  position.x += kMoveFactor * ball_velocity_;
  position.y -= kMoveFactor * ball_velocity_;
  SetObjectPosition(position);
}
}  // namespace Model
