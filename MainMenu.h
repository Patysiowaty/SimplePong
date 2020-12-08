#pragma once
#include "Scene.h"

namespace Model {
class MainMenu : public Scene {
 public:
  MainMenu();
  void LoadScene() override;
  void UpdateScene() override;
  void DestroyScene() override;

 private:
  void LoadObjects();
  void LoadSurfaces();
};
}  // namespace Model
