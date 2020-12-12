#include "ModelPublisher.h"

ModelPublisher::ModelPublisher() {}

ModelPublisher::~ModelPublisher() {}

void ModelPublisher::AddListener(ModelListener* listener) {
  listeners_.emplace_back(listener);
}

void ModelPublisher::RemoveListener(ModelListener* listener) {
  auto it = std::find(listeners_.begin(), listeners_.begin(), listener);
  if (it != listeners_.end()) listeners_.erase(it);
}

void ModelPublisher::Notify(SDL_Point position) {
  for (auto listener : listeners_) {
    listener->UpdateData(position);
  }
}
