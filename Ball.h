#pragma once
#include "GameObject.h"
namespace Model {
class Ball : public GameObject {
 public:
  Ball();
  Ball(const std::string& icon, const SDL_Point& position,
       const SDL_Rect& size);

  ~Ball();

  void Move();

  private:
};
}  // namespace Model
