#pragma once
#include "Paddle.h"

namespace Model {
class Enemy : public Paddle {
 public:
  Enemy();
  Enemy(const std::string& icon, const SDL_Point& postion,
        const SDL_Rect& size);

  ~Enemy();

  void MoveUp() override;
  void MoveDown() override;

 private:
};
}  // namespace Model
