#include "GameEngine.h"

namespace Model {
GameEngine::GameEngine() {}

GameEngine::~GameEngine() { delete current_scene_; }

void GameEngine::Initialize() {
  is_run_ = {true};
  current_scene_ = new MainMenu();
}

void GameEngine::Update() {}

bool GameEngine::IsRunning() { return is_run_; }

void GameEngine::SetQuit() { is_run_ = {false}; }
}  // namespace Model
