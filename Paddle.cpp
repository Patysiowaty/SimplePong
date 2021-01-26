#include "Paddle.h"

#include <stdexcept>

namespace Model {
Paddle::Paddle() {}
Paddle::Paddle(const SDL_FPoint& position, const SDL_FRect& size)
    : GameObject{position, size} {}

Paddle::~Paddle() {}

void Paddle::Move(MoveDirection direction) {
  switch (direction) {
    case MoveDirection::kUp:
      MoveUp();
      break;
    case MoveDirection::kDown:
      MoveDown();
      break;
    default:
      throw std::runtime_error{"Illegal paddle move!"};
  }
}

void Paddle::MoveUp() {
  auto position_ = GetObjectPosition();
  position_.y -= kBaseMoveSpeed;
  SetObjectPosition(position_);
}

void Paddle::MoveDown() {
  auto position_ = GetObjectPosition();
  position_.y += kBaseMoveSpeed;
  SetObjectPosition(position_);
}

}  // namespace Model
