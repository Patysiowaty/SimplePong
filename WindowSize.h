#pragma once
#include <iostream>
#include <stdexcept>
namespace View {
class WindowSize {
 public:
  WindowSize();
  WindowSize(int width, int height);
  int GetWindowWidth() const;
  int GetWindowHeight() const;
  void SetWindowWidth(int width);
  void SetWindowHeight(int height);

 private:
  int width_ = {0};
  int height_ = {0};
};
}  // namespace View
