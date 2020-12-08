#pragma once
#include "Surface.h"

namespace View {
class Texture {
 public:
  Texture();

  void CreateTexture(const Other::Surface& surface, SDL_Renderer* renderer);

  SDL_Texture* GetTexture() const;
  std::string GetTextureName();

 private:
  SDL_Texture* texture_ = {nullptr};
  std::string texture_name_ = {""};
};
}  // namespace View
