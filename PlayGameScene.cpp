#include "PlayGameScene.h"

namespace Model {

PlayGameScene::PlayGameScene() : game_board_{player_, enemy_, ball_} {}

PlayGameScene::~PlayGameScene() {}

void PlayGameScene::LoadScene() { scene_objects_.push_back(player_); }

void PlayGameScene::UpdateScene() {}

void PlayGameScene::DestroyScene() {}

std::vector<GameObject> PlayGameScene::GetSceneObjects() const {
  return scene_objects_;
}
}  // namespace Model
