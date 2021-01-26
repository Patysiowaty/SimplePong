#pragma once
#include <SDL.h>

#include "MoveDirection.h"

class GameComponent;
class Mediator {
 public:
  Mediator() {}
  virtual void OnComponentChange(GameComponent* component) = 0;
};
