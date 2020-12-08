#include "GameObject.h"

GameObject::GameObject(const std::string& icon_path, const SDL_Point& postion,
                       const SDL_Rect& size)
    : position_{postion}, size_{size}, surface_{icon_path} {
  surface_.LoadSurface();
}

GameObject::GameObject(const std::string& icon) : surface_{icon} {
  surface_.LoadSurface();
}

GameObject::~GameObject() {}

Other::Surface GameObject::GetSurface() const { return surface_; }

SDL_Point GameObject::GetPosition() const { return position_; }

void GameObject::SetSize(int width, int height) {
  size_.w = width;
  size_.h = height;
}

void GameObject::SetPosition(int x, int y) {
  position_.x = x;
  position_.y = y;
}

void GameObject::SetPosition(const SDL_Point& position) {
  position_ = {position};
}
