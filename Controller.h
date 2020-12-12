#pragma once
#include "View.h"
#include "Scene.h"

namespace Controller {
class Controller {
 public:
  Controller(Model::Scene& scene, View::View& view);

  void Initialize();

  void GetEvent();

 private:
  Model::Scene& scene_;
  View::View& view_;
};
}  // namespace Controller
