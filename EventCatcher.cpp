#include "EventCatcher.h"

#include <SDL.h>

namespace Model {
EventCatcher::EventCatcher() {}

void EventCatcher::CatchEvent() {
  SDL_Event user_event_;

  if (SDL_PollEvent(&user_event_)) RaiseEvent(user_event_);
}
}  // namespace Model