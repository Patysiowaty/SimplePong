#pragma once
#include "GameObject.h"
namespace Model {
class Paddle : public GameObject {
 public:
  Paddle();
  Paddle(const std::string& icon);
  Paddle(const std::string& icon, const SDL_Point& position,
         const SDL_Rect& size);

  virtual ~Paddle();

  virtual void MoveUp() = 0;
  virtual void MoveDown() = 0;
};
}  // namespace Model
