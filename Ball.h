#pragma once
#include "GameObject.h"
#include "GameComponent.h"
#include "MoveDirection.h"
namespace Model {
class Ball : public GameObject, public GameComponent {
 public:
  Ball();
  Ball(const SDL_FPoint& position, const SDL_FRect& size);

  ~Ball();

  void Move(MoveDirection direction);
  void AccelerateBall();


 private:
  void MoveDownLeft(SDL_FPoint position);
  void MoveDownRight(SDL_FPoint position);
  void MoveUpLeft(SDL_FPoint position);
  void MoveUpRight(SDL_FPoint position);

 private:
  float ball_velocity_ = {1.f};
  const float kMoveFactor = {0.2f};
  const float kAccelerateFactor = {0.1f};
};
}  // namespace Model
