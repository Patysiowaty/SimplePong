#include "Surface.h"

#include <SDL_image.h>

#include <stdexcept>

namespace Other {
Surface::Surface() {}
Surface::Surface(const Surface& surface) { surface_ = surface.surface_; }

Surface::Surface(const std::string& file_destination)
    : file_destination_{file_destination} {}

Surface::~Surface() {
  // TODO: check this
  SDL_FreeSurface(surface_);
  // surface_ = nullptr;  // temporary solution
}

void Surface::LoadSurface() {
  surface_ = IMG_Load(file_destination_.c_str());
  if (surface_ == nullptr)
    throw std::runtime_error{"Can't load surface: " + file_destination_};
}

void Surface::SetSurfaceDestination(const std::string& file_destination) {
  file_destination_ = file_destination;
}

SDL_Surface* Surface::GetSurface() const { return surface_; }

std::string Surface::GetSurfaceName() const { return name_; }
}  // namespace Other