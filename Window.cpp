#include "Window.h"

#include <iostream>

namespace View {
Window::Window() {}

Window::~Window() { SDL_DestroyWindow(window_); }

void Window::CreateWindow() { InitializeWindow(); }

void Window::SetWindowName(const std::string& name) {
  window_name_ = name;
  SDL_SetWindowTitle(window_, window_name_.c_str());
}

void Window::SetWindowSize(const WindowSize& window_size) {
  window_size_ = window_size;
  SDL_SetWindowSize(window_, window_size_.GetWindowWidth(),
                    window_size_.GetWindowHeight());
}

WindowSize& Window::GetWindowSize() { return window_size_; }

SDL_Window* Window::GetWindowContext() { return window_; }

void Window::InitializeWindow() {
  window_ = SDL_CreateWindow(
      window_name_.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
      window_size_.GetWindowWidth(), window_size_.GetWindowHeight(),
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN);

  if (window_ == nullptr)
    throw std::runtime_error{"Failed to create window: " +
                             std::string(SDL_GetError())};
}
}  // namespace View