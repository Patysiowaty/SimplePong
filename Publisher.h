#pragma once
#include <vector>

#include "Listener.h"
class Publisher {
 public:
  Publisher();
  virtual ~Publisher();

  void AddListener(Listener* listener);
  void RemoveListener(Listener* listener);
  virtual void Notify() = 0;

 private:
  std::vector<Listener*> listeners_;
};
