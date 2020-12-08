#include "Application.h"

Application::Application(const std::string& game_name)
    : game_name_{game_name}, controller_{game_, view_} {}

void Application::InitializeComponents() try {
  game_.Initialize();
  view_.Initialize();
  view_.GetWindow().SetWindowName(game_name_);
  controller_.Initialize();
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::Run() try {
  while (game_.IsRunning()) {
    game_.Update();
    view_.Render();
    controller_.GetEvent();
  }
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::OnQuit() {
  game_.OnQuit();
  view_.OnQuit();
  controller_.OnQuit();
}
