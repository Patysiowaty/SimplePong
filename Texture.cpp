#include "Texture.h"

#include <stdexcept>

namespace View {
Texture::Texture() {}

Texture::~Texture() { SDL_DestroyTexture(texture_); }

void Texture::CreateTexture(Model::GameObject object, SDL_Renderer* renderer) {
  texture_ = SDL_CreateTextureFromSurface(renderer, object.GetObjectIcon());
  SetTextureSize(object.GetObjectSize());
  if (texture_ == nullptr)
    throw std::runtime_error{"Creating font surface failed!"};
}

void Texture::SetTextureSize(SDL_FRect size) {
  size_.h = size.h;
  size_.w = size.w;
}

void Texture::SetTexturePosition(SDL_FPoint position) {
  size_.x = position.x;
  size_.y = position.y;
}

const SDL_FRect* Texture::GetTextureSize() { return &size_; }

SDL_Texture* Texture::GetTexture() { return texture_; }

}  // namespace View
