#include "WindowSize.h"

View::WindowSize::WindowSize() {}

View::WindowSize::WindowSize(int width, int height) try {
  if (width < 0 || height < 0)
    throw std::invalid_argument{"Window size must be at least equal 0!"};

  width_ = width;
  height_ = height;
} catch (std::exception& e) {
  std::cerr << e.what() << "\n";
}

int View::WindowSize::GetWindowWidth() const { return width_; }

int View::WindowSize::GetWindowHeight() const { return height_; }

void View::WindowSize::SetWindowWidth(int width) try {
  if (width < 0)
    throw std::invalid_argument{"Window size must be at least equal 0!"};

  width_ = width;
} catch (std::exception& e) {
  std::cerr << e.what() << "\n";
}

void View::WindowSize::SetWindowHeight(int height) try {
  if (height < 0)
    throw std::invalid_argument{"Window size must be at least equal 0!"};

  height_ = height;
} catch (std::exception& e) {
  std::cerr << e.what() << "\n";
}
