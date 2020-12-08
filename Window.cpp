#include "Window.h"

#include <iostream>

View::Window::Window() {}

void View::Window::CreateWindow() {
  InitializeWindow();
  InitializeRenderer();
}

void View::Window::SetWindowName(const std::string& name) {
  window_name_ = name;
  SDL_SetWindowTitle(window_, window_name_.c_str());
}

void View::Window::SetWindowSize(const View::WindowSize& window_size) {
  window_size_ = window_size;
  SDL_SetWindowSize(window_, window_size_.GetWindowWidth(),
                    window_size_.GetWindowHeight());
}

View::WindowSize& View::Window::GetWindowSize() { return window_size_; }

SDL_Window* View::Window::GetWindowContext() const { return window_; }

SDL_Renderer* View::Window::GetRenderer() const { return renderer_; }

void View::Window::InitializeWindow() {
  window_ = SDL_CreateWindow(
      window_name_.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
      window_size_.GetWindowWidth(), window_size_.GetWindowHeight(),
      SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN);

  if (window_ == nullptr)
    throw std::runtime_error{"Window is nullptr! SDL: " +
                             std::string(SDL_GetError())};
}

void View::Window::InitializeRenderer() {
  renderer_ = SDL_CreateRenderer(window_, -1,
                                 SDL_RENDERER_TARGETTEXTURE |
                                     SDL_RENDERER_PRESENTVSYNC |
                                     SDL_RENDERER_ACCELERATED);

  if (renderer_ == nullptr)
    throw std::runtime_error{"Renderer is nullptr! SDL: " +
                             std::string(SDL_GetError())};
}

void View::Window::OnQuit() {
  SDL_DestroyWindow(window_);
  SDL_DestroyRenderer(renderer_);
}
