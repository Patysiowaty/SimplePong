#pragma once

#include "Publisher.h"

namespace Model {
class EventCatcher : public Publisher {
 public:
  EventCatcher();
  void CatchEvent();
};
}  // namespace Controller
