#pragma once
#include "Controller.h"
#include "GameEngine.h"
#include "View.h"

class Application {
 public:
  Application(const std::string& game_name);

  void InitializeComponents();
  void Run();
  void OnQuit();

 private:
  Model::GameEngine game_;
  View::View view_;
  Controller::Controller controller_;

  std::string game_name_;
};
