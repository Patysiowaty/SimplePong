#include "View.h"

namespace View {
View::View() : renderer_{window_} {}

View::~View() {
  SDL_Quit();
  IMG_Quit();
}

void View::Initialize() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    throw std::runtime_error{"Unable to initialize SDL! SDL: " +
                             std::string(SDL_GetError())};

  // TODO: Check this
  // if (IMG_Init((IMG_INIT_JPG | IMG_INIT_PNG) == 0))
  // throw std::runtime_error{"Unable to initialize SDL_image! SDL: " +
  //                         std::string{SDL_GetError()}};

  window_.CreateWindow();
  renderer_.Initialize();
}

void View::Render() {
  SDL_RenderClear(renderer_.GetRenderer());
  SDL_SetRenderDrawColor(renderer_.GetRenderer(), 100, 100, 100, 0);
  SDL_RenderPresent(renderer_.GetRenderer());
}

Window& View::GetWindow() { return window_; }
}  // namespace View