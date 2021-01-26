#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

#include <map>
#include <memory>
#include <string>

#include "Config.h"
#include "Texture.h"

namespace Model {
class Window {
 public:
  Window();
  ~Window();

  void SetWindowSize(const SDL_Rect& window_size);

  void Initialize();
  void ShowWindow();

  void DrawTexture(SDL_Texture* texture);
  void DrawTexture(SDL_Texture* texture, SDL_FRect* position);

  void Draw();

  void DestroyWindow();
  void ResizeWindow(SDL_Rect new_window_size);
  void ChangePosition(SDL_Rect new_window_position);
  void RestoreDefault();

 private:
  void CreateWindow();
  void CreateRenderer();
  void CreateWindowIcon();

 private:
  SDL_Window* window_ = {nullptr};
  SDL_Renderer* renderer_ = {nullptr};
  SDL_Surface* icon_ = {nullptr};
  SDL_Rect window_size_ = Config::kMainWindow1280x720;
  bool is_visible_ = {false};
  View::Texture texture_;
};
}  // namespace Model
