#pragma once
#include "Window.h"
namespace Model {
class Scene {
 public:
  Scene() {}
  virtual ~Scene() {}
  virtual void LoadScene() = 0;
  virtual void UpdateScene() = 0;
  virtual void DestroyScene() = 0;
};
}  // namespace Model
