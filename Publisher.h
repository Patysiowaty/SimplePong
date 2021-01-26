#pragma once
#include <SDL.h>

#include <string>
#include <vector>

#include "GameObject.h"
#include "Listener.h"
#include "MoveDirection.h"
#include "ObjectBallBounced.h"
class Publisher {
 public:
  Publisher();
  virtual ~Publisher();

  void AddListener(Listener* listener);
  void RemoveListener(Listener* listener);
  void Notify();
  void Notify(MoveDirection direction);
  void Notify(SDL_Point position_);
  void Hit(ObjectBallBounced object);
  void RaiseEvent(SDL_Event& event_passed);
  void PassObject(const Model::GameObject& object, const std::string& name);

 private:
  std::vector<Listener*> listeners_;
};
