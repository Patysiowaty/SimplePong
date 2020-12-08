#include "Paddle.h"

namespace Model {
Paddle::Paddle(const std::string& icon) : GameObject{icon} {}

Paddle::Paddle(const std::string& icon, const SDL_Point& position,
               const SDL_Rect& size)
    : GameObject{icon, position, size} {}

Paddle::~Paddle() {}


}  // namespace Model
