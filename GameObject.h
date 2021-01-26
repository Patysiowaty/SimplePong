#pragma once
#include <SDL.h>
#include <SDL_ttf.h>

#include <stdexcept>
#include <string>
namespace Model {
class GameObject {
 public:
  GameObject();
  GameObject(const SDL_FPoint& position, const SDL_FRect& size);

  virtual ~GameObject();

  virtual SDL_FPoint GetObjectPosition() const;
  virtual SDL_FRect GetObjectSize() const;
  SDL_Surface* GetObjectIcon();

  virtual void SetObjectPosition(const SDL_FPoint& position);
  virtual void SetObjectSize(const SDL_FRect& size);
  void SetObjectIcon(SDL_Surface* surface);
  void CreateObjectIcon(const std::string& icon_path);

 private:
  void OnPositionUpdate();

 private:
  SDL_Surface* object_icon_ = {nullptr};
  SDL_FPoint position_ = {.0f, 0.f};
  SDL_FRect size_ = {position_.x, position_.y, .0f, .0f};
};
}  // namespace Model