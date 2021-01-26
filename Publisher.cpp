#include "Publisher.h"

Publisher::Publisher() {}

Publisher::~Publisher() {}

void Publisher::AddListener(Listener* listener) {
  listeners_.emplace_back(listener);
}

void Publisher::RemoveListener(Listener* listener) {
  auto it = std::find(listeners_.begin(), listeners_.begin(), listener);
  if (it != listeners_.end()) listeners_.erase(it);
}

void Publisher::Notify() {}

void Publisher::Notify(MoveDirection direction) {
  for (auto listener : listeners_) {
    listener->MoveObject(direction);
  }
}

void Publisher::Notify(SDL_Point position_) {
  for (auto listener : listeners_) {
    listener->UpdatePosition(position_);
  }
}

void Publisher::Hit(ObjectBallBounced object) {
  for (auto listener : listeners_) {
    listener->HitObject(object);
  }
}

void Publisher::RaiseEvent(SDL_Event& event_passed) {
  for (auto listener : listeners_) {
    listener->HandleEvent(event_passed);
  }
}

void Publisher::PassObject(const Model::GameObject& object,
                           const std::string& name) {
  for (auto listener : listeners_) {
    listener->RenderObject(object, name);
  }
}
