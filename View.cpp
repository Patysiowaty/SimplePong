#include "View.h"

View::View::View() {}

void View::View::Initialize() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    throw std::runtime_error{"Unable to initialize SDL! SDL: " +
                             std::string(SDL_GetError())};

  // TODO: Check this
  // if (IMG_Init((IMG_INIT_JPG | IMG_INIT_PNG) == 0))
  // throw std::runtime_error{"Unable to initialize SDL_image! SDL: " +
  //                         std::string{SDL_GetError()}};

  window_.CreateWindow();
}

void View::View::Render() {
  SDL_RenderClear(window_.GetRenderer());
  SDL_SetRenderDrawColor(window_.GetRenderer(), 100, 150, 200, 0);
  SDL_RenderPresent(window_.GetRenderer());
}

View::Window& View::View::GetWindow() { return window_; }

void View::View::GetObjects(const std::vector<GameObject>& objects) {
  objects_to_render_ = objects;
  MakeTexturesFromSurface();
}

void View::View::OnQuit() {
  window_.OnQuit();
  SDL_Quit();
  IMG_Quit();
}

void View::View::MakeTexturesFromSurface() {
  for (const auto& object : objects_to_render_) {
    Texture texture;
    texture.CreateTexture(object.GetSurface(), window_.GetRenderer());
    textures_.push_back(texture);
  }
}
