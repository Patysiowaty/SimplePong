#include "GameObject.h"

#include <SDL_image.h>
namespace Model {
GameObject::GameObject() {}

GameObject::GameObject(const SDL_FPoint& position, const SDL_FRect& size)
    : position_{position}, size_{position.x, position.y, size.w, size.h} {}

GameObject::~GameObject() { SDL_FreeSurface(object_icon_); }

SDL_FPoint GameObject::GetObjectPosition() const { return position_; }

SDL_FRect GameObject::GetObjectSize() const { return size_; }

SDL_Surface* GameObject::GetObjectIcon() { return object_icon_; }

void GameObject::SetObjectPosition(const SDL_FPoint& position) {
  position_ = {position};
  OnPositionUpdate();
}

void GameObject::SetObjectSize(const SDL_FRect& size) {
  size_.h = size.h;
  size_.w = size.w;
}

void GameObject::CreateObjectIcon(const std::string& icon_path) {
  object_icon_ = IMG_Load(icon_path.c_str());
  if (object_icon_ == nullptr)
    throw std::runtime_error{"Creating surface failed! Error: " +
                             std::string{SDL_GetError()}};
}

void GameObject::OnPositionUpdate() {
  size_.x = position_.x;
  size_.y = position_.y;
}
void GameObject::SetObjectIcon(SDL_Surface* surface) {
  object_icon_ = {surface};
}
}  // namespace Model
