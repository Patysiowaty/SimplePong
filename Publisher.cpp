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
