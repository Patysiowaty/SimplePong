#pragma once
#include "Paddle.h"
namespace Model {
class Player : public Paddle {
 public:
  Player();
  Player(const std::string& icon);

  Player(const std::string& icon, const SDL_Point& position,
         const SDL_Rect& size);

  ~Player();

  void MoveUp() override;
  void MoveDown() override;

 private:
};
}  // namespace Model
