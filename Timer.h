#pragma once
#include <SDL.h>

#include <cstdint>

#include "Config.h"
class Timer {
 public:
  Timer();
  ~Timer();

  double GetDeltaTime();
  void Start();
  void Reset();
  void Tick();

 private:
  uint32_t start_time_ = {0};
  uint32_t last_time_ = {0};
  uint32_t delta_time_ = {0};
};
