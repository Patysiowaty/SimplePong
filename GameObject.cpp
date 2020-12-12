#include "GameObject.h"

GameObject::GameObject(const std::string& icon_path, const SDL_Point& postion,
                       const SDL_Rect& size)
    : position_{postion}, size_{size}, surface_{icon_path} {
  surface_.LoadSurface();
}

GameObject::GameObject() {}

GameObject::GameObject(const std::string& icon) : surface_{icon} {
  surface_.LoadSurface();
}

GameObject::~GameObject() {}

Other::Surface& GameObject::GetSurface() { return surface_; }

SDL_Point GameObject::GetObjectPosition() const { return position_; }

SDL_Rect GameObject::GetObjectSize() const { return size_; }

void GameObject::SetObjectSize(int width, int height) {
  size_.w = width;
  size_.h = height;
}

void GameObject::SetObjectPosition(int x, int y) {
  position_.x = x;
  position_.y = y;
  OnPositionUpdate();
}

void GameObject::SetObjectPosition(const SDL_Point& position) {
  position_ = {position};
  OnPositionUpdate();
}

void GameObject::OnPositionUpdate() {
  size_.x = position_.x;
  size_.y = position_.y;
  Notify(position_);
}
