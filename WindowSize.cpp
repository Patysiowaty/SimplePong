#include "WindowSize.h"

View::WindowSize::WindowSize() {}

View::WindowSize::WindowSize(int width, int height) {
  if (width < 0 || height < 0)
    throw std::invalid_argument{"Passed window size less than 0!"};

  width_ = width;
  height_ = height;
}

int View::WindowSize::GetWindowWidth() const { return width_; }

int View::WindowSize::GetWindowHeight() const { return height_; }

void View::WindowSize::SetWindowWidth(int width) {
  if (width < 0) throw std::invalid_argument{"Passed window size less than 0!"};

  width_ = width;
}

void View::WindowSize::SetWindowHeight(int height) {
  if (height < 0)
    throw std::invalid_argument{"Passed window size less than 0!"};

  height_ = height;
}
