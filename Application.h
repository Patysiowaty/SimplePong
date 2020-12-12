#pragma once
#include "Controller.h"
#include "PlayGameScene.h"
#include "View.h"
#include "Controller.h"

class Application {
 public:
  Application(const std::string& game_name);

  void InitializeComponents();
  void Run();
  void OnQuit();

 private:
  Model::PlayGameScene game_;
  View::View view_;
  Controller::Controller main_controller_;

  std::string game_name_;
};
