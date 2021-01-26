#pragma once
#include "Mediator.h"

class GameComponent {
 public:
  GameComponent();

  virtual void SetMediator(Mediator* mediator);
  virtual void OnChanged(GameComponent* component);

 private:
  Mediator* mediator_ = {nullptr};
};
