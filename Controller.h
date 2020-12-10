#pragma once
#include "GameEngine.h"
#include "View.h"

namespace Controller {
class Controller {
 public:
  Controller(Model::GameEngine& game, View::View& view);

  void Initialize();

  void GetEvent();

  void OnQuit();

 private:
  Model::GameEngine& game_;
  View::View& view_;
};
}  // namespace Controller
