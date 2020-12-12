#include "Player.h"
namespace Model {
Player::Player() {}

Player::Player(const std::string& icon) : Paddle{icon} {}

Player::Player(const std::string& icon_path, const SDL_Point& position,
               const SDL_Rect& size)
    : Paddle{icon_path, position, size} {}

Player::~Player() {}

void Player::MoveUp() {
  auto position = GameObject::GetPosition();
  position.y += 1;
  GameObject::SetPosition(position);
}

void Player::MoveDown() {
  auto position = GameObject::GetPosition();
  position.y -= 1;
  GameObject::SetPosition(position);
}

}  // namespace Model
