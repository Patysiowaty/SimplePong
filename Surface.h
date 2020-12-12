#pragma once
#include <SDL.h>

#include <string>
namespace Other {
class Surface {
 public:
  Surface();
  Surface(const Surface& surface);
  Surface(const std::string& file_destination);
  ~Surface();
  void LoadSurface();
  void SetSurfaceDestination(const std::string& file_destination);
  SDL_Surface* GetSurface() const;
  std::string GetSurfaceName() const;

 private:
  SDL_Surface* surface_ = {nullptr};
  std::string name_ = {""};
  std::string file_destination_;
};
}  // namespace Other
