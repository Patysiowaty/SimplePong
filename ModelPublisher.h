#pragma once
#include "ModelListener.h"
#include <vector>
class ModelPublisher {
 public:
  ModelPublisher();
  ~ModelPublisher();

  void AddListener(ModelListener* listener);
  void RemoveListener(ModelListener* listener);
  void Notify(SDL_Point position);

 private:
  std::vector<ModelListener*> listeners_;
};
