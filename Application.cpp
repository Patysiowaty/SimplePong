#include "Application.h"

Application::Application(const std::string& game_name)
    : game_name_{game_name},
      game_{view_.GetRenderer()},
      main_controller_{game_, view_} {}

void Application::InitializeComponents() try {
  view_.Initialize();
  game_.LoadScene();
  main_controller_.Initialize();
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::Run() try {
  while (true) {
    game_.UpdateScene();
    view_.Render();
    main_controller_.GetEvent();
  }
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::OnQuit() {}
