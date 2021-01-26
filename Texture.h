#pragma once

#include "GameObject.h"

namespace View {
class Texture {
 public:
  Texture();
  ~Texture();
  void CreateTexture(Model::GameObject object, SDL_Renderer* renderer);

  void SetTextureSize(SDL_FRect size);
  void SetTexturePosition(SDL_FPoint position);
  const SDL_FRect* GetTextureSize();
  SDL_Texture* GetTexture();

 private:
  SDL_Texture* texture_ = {nullptr};
  SDL_FRect size_ = {.0f, .0f, .0f, .0f};
};
}  // namespace View
