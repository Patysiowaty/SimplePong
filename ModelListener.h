#pragma once
#include <SDL.h>
class ModelListener {
 public:
  virtual ~ModelListener(){};
  virtual void UpdateData(SDL_Point point) = 0;
};
