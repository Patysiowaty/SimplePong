#include "Texture.h"

#include <iostream>
#include <SDL_image.h>
namespace View {
Texture::Texture() {}

void Texture::CreateTexture(const Other::Surface& surface,
                            SDL_Renderer* renderer) {
  if (surface.GetSurface() == nullptr) throw std::runtime_error{"1"};

  if (renderer == nullptr) throw std::runtime_error{"2"};

  texture_ = IMG_LoadTexture(renderer, "C:/Users/pkolo/Desktop/test.png");
  //SDL_SetTextureBlendMode(texture_, SDL_BLENDMODE_BLEND);

  if (texture_ == nullptr) throw std::runtime_error{"Failed to create texture: " + surface.GetSurfaceDestination()};
}

void Texture::SetTextureSize(SDL_Rect size) { size_ = {size}; }

void Texture::SetTexturePosition(SDL_Point position) {
  size_.x = position.x;
  size_.y = position.y;
}

SDL_Rect* Texture::GetTextureSize() { return &size_; }

SDL_Texture* Texture::GetTexture() const { return texture_; }

}  // namespace View
