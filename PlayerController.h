#pragma once
#include <SDL.h>

#include "Listener.h"
#include "MoveDirection.h"
#include "Paddle.h"
#include "Publisher.h"

namespace Controller {
class PlayerController : public Listener {
 public:
  PlayerController();
  void SetPlayer(Model::Paddle* player);
  void HandleEvent(SDL_Event& passed_event) override;

 private:
  MoveDirection player_move_ = MoveDirection::kNone;
  Model::Paddle* player_ = {nullptr};
};
}  // namespace Controller
