#include "Enemy.h"
namespace Model {
Enemy::Enemy(const std::string& icon, const SDL_Point& postion,
             const SDL_Rect& size)
    : Paddle{icon, postion, size} {}

Enemy::~Enemy() {}

void Enemy::MoveUp() {}

void Enemy::MoveDown() {}

}  // namespace Model