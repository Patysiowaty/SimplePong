#include "Timer.h"

Timer::Timer() {}

Timer::~Timer() {}

double Timer::GetDeltaTime() {
  return delta_time_ / Config::kSecondsMultiplier;
}

void Timer::Start() { start_time_ = SDL_GetTicks(); }

void Timer::Reset() {
  start_time_ = SDL_GetTicks();
  delta_time_ = 0;
}

void Timer::Tick() { delta_time_ = SDL_GetTicks() - start_time_; }
