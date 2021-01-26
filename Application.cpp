#include "Application.h"

#include <iostream>

#include "config.h"

Application::Application() : window_controller_{&main_window_} {}

void Application::Initialize() try {
  InitializeSDL();
  play_scene_.LoadScene();
  play_scene_.RunGame();
  main_window_.Initialize();
  main_window_.ShowWindow();
  play_scene_controller_.SetPlayScene(&play_scene_);
  event_catcher_.AddListener(&window_controller_);
  event_catcher_.AddListener(&play_scene_controller_);
  main_timer_.Start();
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::Run() try {
  while (play_scene_.IsRunning()) {
    main_timer_.Tick();
    event_catcher_.CatchEvent();
    if (main_timer_.GetDeltaTime() >= Config::kFrameRate) {
      play_scene_.UpdateScene();
      main_window_.Draw();
      main_timer_.Reset();
    }
  }
} catch (std::exception& e) {
  std::cerr << e.what() << std::endl;
}

void Application::InitializeSDL() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    throw std::runtime_error{"Unable to initialize SDL! Error: " +
                             std::string{SDL_GetError()}};

  if (IMG_Init((IMG_INIT_JPG | IMG_INIT_PNG) == 0))
    throw std::runtime_error{"Unable to initialize SDL_image! Error: " +
                             std::string{SDL_GetError()}};

  if (TTF_Init() == -1)
    throw std::runtime_error{"Unable to initialize SDL_TTF! Error: " +
                             std::string{SDL_GetError()}};
}
