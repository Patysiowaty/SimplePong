#include "TextureManager.h"

Other::TextureManager::TextureManager() {}

void Other::TextureManager::AddTexture() {}

void Other::TextureManager::RemoveTexture(const std::string& name) {
  texture_container_.erase(name);
}

void Other::TextureManager::Clear() {
 texture_container_.clear();
}

View::Texture Other::TextureManager::GetTexture(const std::string& name) {
  return texture_container_[name];
}
