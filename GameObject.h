#pragma once
#include "Surface.h"

class GameObject {
 public:
  GameObject(const std::string& icon);

  GameObject(const std::string& icon, const SDL_Point& postion,
             const SDL_Rect& size);

  virtual ~GameObject();

  virtual Other::Surface GetSurface() const;
  virtual SDL_Point GetPosition() const;

  virtual void SetSize(int width, int height);
  virtual void SetPosition(int x, int y);
  virtual void SetPosition(const SDL_Point& position);

 private:
  Other::Surface surface_;
  SDL_Point position_ = {0, 0};
  SDL_Rect size_ = {position_.x, position_.y, 0, 0};
};
