#include "Ball.h"
namespace Model {
Ball::Ball(const std::string& icon, const SDL_Point& position,
           const SDL_Rect& size)
    : GameObject{icon, position, size} {}

Ball::~Ball() {}

void Ball::Move() {}

}  // namespace Model