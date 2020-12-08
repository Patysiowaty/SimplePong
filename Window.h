#pragma once
#include <SDL.h>

#include <string>

#include "WindowSize.h"

namespace View {
class Window {
 public:
  Window();
  void CreateWindow();

  void SetWindowName(const std::string& name);
  void SetWindowSize(const WindowSize& window_size);
  void HideWindow();

  WindowSize& GetWindowSize();
  SDL_Window* GetWindowContext() const;
  SDL_Renderer* GetRenderer() const;

  void OnQuit();

 private:
  void InitializeWindow();
  void InitializeRenderer();

 private:
  SDL_Window* window_ = {nullptr};
  SDL_Renderer* renderer_ = {nullptr};
  WindowSize window_size_ = {1280, 720};
  std::string window_name_ = {"NONE"};
  bool is_visible_ = {false};
};
}  // namespace View
