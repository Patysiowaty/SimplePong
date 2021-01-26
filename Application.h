#pragma once
#include "EventCatcher.h"
#include "PlayGameScene.h"
#include "PlaySceneController.h"
#include "Timer.h"
#include "Window.h"
#include "WindowController.h"

class Application {
 public:
  Application();

  void Initialize();
  void Run();

 private:
  void InitializeSDL();

 private:
  Model::Window main_window_;
  Model::PlayGameScene play_scene_;
  Model::EventCatcher event_catcher_;
  Controller::WindowController window_controller_;
  Controller::PlaySceneController play_scene_controller_;
  Timer main_timer_;
};
