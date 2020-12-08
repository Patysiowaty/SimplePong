#include "Texture.h"

#include <iostream>
namespace View {
Texture::Texture() {}

void Texture::CreateTexture(const Other::Surface& surface,
                            SDL_Renderer* renderer) {
  texture_name_ = surface.GetSurfaceName();

  if (surface.GetSurface() == nullptr)
    throw std::runtime_error{"Invalid surface: " + surface.GetSurfaceName()};

  if (renderer == nullptr)
    throw std::runtime_error{"Nullptr renderer passed in: " + texture_name_};

  texture_ = SDL_CreateTextureFromSurface(renderer, surface.GetSurface());

  if (texture_ == nullptr)
    throw std::runtime_error{"Failed to create texture: " + texture_name_};
}

SDL_Texture* Texture::GetTexture() const { return texture_; }

std::string Texture::GetTextureName() { return texture_name_; }
}  // namespace View
