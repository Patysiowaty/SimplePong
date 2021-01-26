#pragma once
#include <SDL.h>

#include <string>

#include "GameObject.h"
#include "MoveDirection.h"
#include "ObjectBallBounced.h"
class Listener {
 public:
  virtual ~Listener();
  virtual void MoveObject(MoveDirection direction);
  virtual void UpdatePosition(SDL_Point position_);
  virtual void HitObject(ObjectBallBounced object);
  virtual void HandleEvent(SDL_Event& passed_event);
  virtual void RenderObject(const Model::GameObject& object,
                            const std::string& name);
};
