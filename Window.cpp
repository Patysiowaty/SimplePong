#include "Window.h"

#include <stdexcept>

namespace Model {
Window::Window() {}

Window::~Window() { DestroyWindow(); }

void Window::SetWindowSize(const SDL_Rect& window_size) {
  window_size_ = {window_size};
}

void Window::Initialize() {
  CreateWindow();
  CreateRenderer();
  CreateWindowIcon();
}

void Window::ShowWindow() {
  is_visible_ = {true};
  SDL_ShowWindow(window_);
}

void Window::DrawTexture(SDL_Texture* texture) {
  SDL_RenderCopyF(renderer_, texture, nullptr, nullptr);
}

void Window::DrawTexture(SDL_Texture* texture, SDL_FRect* position) {
  SDL_RenderCopyF(renderer_, texture, nullptr, position);
}

void Window::Draw() {
  SDL_RenderPresent(renderer_);
  SDL_SetRenderDrawColor(renderer_, 80, 100, 120, 255);
  SDL_RenderClear(renderer_);
}

void Window::CreateWindow() {
  window_ = SDL_CreateWindow(Config::kGameName, window_size_.x, window_size_.y,
                             window_size_.w, window_size_.h,
                             SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIDDEN);

  if (window_ == nullptr)
    throw std::runtime_error{"Failed to create window: " +
                             std::string{SDL_GetError()}};
}

void Window::CreateRenderer() {
  renderer_ = SDL_CreateRenderer(window_, -1, SDL_RENDERER_ACCELERATED);

  if (renderer_ == nullptr)
    throw std::runtime_error{"Failed to create window: " +
                             std::string{SDL_GetError()}};
}

void Window::CreateWindowIcon() {
  icon_ = IMG_Load(Config::kWindowIconPath);
  SDL_SetWindowIcon(window_, icon_);
}

void Window::DestroyWindow() {
  SDL_DestroyRenderer(renderer_);
  SDL_DestroyWindow(window_);
  is_visible_ = {false};
}

void Window::ResizeWindow(SDL_Rect value) {
  window_size_.w = {value.w};
  window_size_.h = {value.h};
}

void Window::ChangePosition(SDL_Rect new_window_position) {
  window_size_.x = {new_window_position.x};
  window_size_.y = {new_window_position.y};
}

void Window::RestoreDefault() {
  window_size_ = {Config::kMainWindow1280x720};
  SDL_SetWindowSize(window_, window_size_.w, window_size_.h);
  SDL_SetWindowPosition(window_, window_size_.x, window_size_.y);
}

}  // namespace Model