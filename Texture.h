#pragma once
#include "Surface.h"

namespace View {
class Texture {
 public:
  Texture();

  void CreateTexture(const Other::Surface& surface, SDL_Renderer* renderer);

  void SetTextureSize(SDL_Rect size);
  void SetTexturePosition(SDL_Point position);

  SDL_Rect* GetTextureSize();
  SDL_Texture* GetTexture() const;

 private:
  SDL_Texture* texture_ = {nullptr};
  SDL_Rect size_ = {0, 0, 0, 0};
};
}  // namespace View
