#pragma once
#include <SDL.h>

#include <string>

#include "WindowSize.h"

namespace View {
class Window {
 public:
  Window();
  ~Window();

  void CreateWindow();

  void SetWindowName(const std::string& name);
  void SetWindowSize(const WindowSize& window_size);

  WindowSize& GetWindowSize();
  SDL_Window* GetWindowContext();

 private:
  void InitializeWindow();

 private:
  SDL_Window* window_ = {nullptr};
  WindowSize window_size_ = {1280, 720};
  std::string window_name_ = {"NONE"};
  bool is_visible_ = {false};
};
}  // namespace View
