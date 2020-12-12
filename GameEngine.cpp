#include "GameEngine.h"

namespace Model {
GameEngine::GameEngine() {}

void GameEngine::Initialize() {
  is_run_ = {true};
  //play_game_.LoadScene();
}

void GameEngine::Update() { //play_game_.UpdateScene(); 
}

void GameEngine::OnQuit() {}

//const PlayGameScene& GameEngine::GetCurrentScene() { return play_game_; }

bool GameEngine::IsRunning() { return is_run_; }

void GameEngine::SetQuit() { is_run_ = {false}; }
}  // namespace Model
