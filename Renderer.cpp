#include "Renderer.h"
namespace View {
Renderer::Renderer(Window& window) : window_(window) {}

Renderer::~Renderer() { SDL_DestroyRenderer(renderer_); }

void Renderer::Initialize() {
  renderer_ = SDL_CreateRenderer(window_.GetWindowContext(), -1,
                                 SDL_RENDERER_ACCELERATED);

  if (renderer_ == nullptr)
    throw std::runtime_error{"Failed to create renderer: " +
                             std::string(SDL_GetError())};
}

SDL_Renderer* Renderer::GetRenderer() { return renderer_; }

}  // namespace View
