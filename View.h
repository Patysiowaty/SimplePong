#pragma once
#include <SDL_image.h>

#include <vector>

#include "GameObject.h"
#include "MainMenu.h"
#include "Texture.h"
#include "Window.h"

namespace View {
class View {
 public:
  View();

  void Initialize();
  void Render();

  Window& GetWindow();

  void GetObjects(const std::vector<GameObject>& objects);

  void OnQuit();

 private:
  void MakeTexturesFromSurface();

  Window window_;

  std::vector<GameObject> objects_to_render_;
  std::vector<Texture> textures_;
};
}  // namespace View
