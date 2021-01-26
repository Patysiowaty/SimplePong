#include "PlayerController.h"

#include <iostream>
namespace Controller {
PlayerController::PlayerController() {}

void PlayerController::SetPlayer(Model::Paddle* player) { player_ = {player}; }

void PlayerController::HandleEvent(SDL_Event& passed_event) {
  if (passed_event.type == SDL_KEYDOWN) {
    switch (passed_event.key.keysym.mod) {
      case SDLK_UP:
      case SDLK_w: {
        player_->Move(MoveDirection::kUp);
        break;
      }
      case SDLK_DOWN:
      case SDLK_s: {
        player_->Move(MoveDirection::kDown);
        break;
      }
      default:
        break;
    }
  }
}
}  // namespace Controller