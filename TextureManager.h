#pragma once
#include <map>

#include "Texture.h"
namespace Other {
class TextureManager {
 public:
  TextureManager();

  void AddTexture();
  void RemoveTexture(const std::string& name);

  void Clear();

  View::Texture GetTexture(const std::string& name);

 private:
  std::map<std::string, View::Texture> texture_container_;
};
}  // namespace Other
