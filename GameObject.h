#pragma once
#include "ModelPublisher.h"
#include "Surface.h"

class GameObject : public ModelPublisher {
 public:
  GameObject();
  GameObject(const std::string& icon);

  GameObject(const std::string& icon, const SDL_Point& postion,
             const SDL_Rect& size);

  virtual ~GameObject();

  virtual Other::Surface& GetSurface();
  virtual SDL_Point GetObjectPosition() const;
  virtual SDL_Rect GetObjectSize() const;

  virtual void SetObjectSize(int width, int height);
  virtual void SetObjectPosition(int x, int y);
  virtual void SetObjectPosition(const SDL_Point& position);

 private:
  void OnPositionUpdate();

 private:
  Other::Surface surface_;
  SDL_Point position_ = {0, 0};
  SDL_Rect size_ = {position_.x, position_.y, 0, 0};
};
