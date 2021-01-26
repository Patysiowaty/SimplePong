#pragma once
#include "GameObject.h"
#include "MoveDirection.h"
namespace Model {
class Paddle : public GameObject {
 public:
  Paddle();
  Paddle(const SDL_FPoint& position, const SDL_FRect& size);

  ~Paddle();

  void Move(MoveDirection direction);

 private:
  void MoveUp();
  void MoveDown();

 private:
  float kBaseMoveSpeed = 10.f;
};
}  // namespace Model
