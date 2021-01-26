#include "Scene.h"
namespace Model {
Scene::Scene() {}

Scene::~Scene() {}

void Scene::StopGame() { stop_ = {true}; }

void Scene::Resume() { stop_ = {false}; }

void Scene::QuitGame() {
  quit_ = {true};
  run_ = {false};
}

void Scene::RunGame() { run_ = {true}; }

bool Scene::IsRunning() { return run_ && !quit_; }

bool Scene::IsStopped() { return stop_; }
}  // namespace Model