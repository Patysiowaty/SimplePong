#pragma once
#include <SDL.h>

#include <string>
namespace Other {
class Surface {
 public:
  Surface(const Surface& surface);
  Surface(const std::string& file_destination);
  Surface(const std::string& file_destination, const std::string& surface_name);
  ~Surface();
  void LoadSurface();
  SDL_Surface* GetSurface() const;
  std::string GetSurfaceName() const;

 private:
  SDL_Surface* surface_ = {nullptr};
  std::string name_ = {""};
  std::string file_destination_ = {""};
};
}  // namespace Other
