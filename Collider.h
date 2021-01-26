#pragma once
#include <SDL.h>

#include "GameObject.h"
namespace Model {
class Collider {
 public:
  Collider(GameObject object, GameObject object_to_check);

  bool CheckIsHit();

 private:
  GameObject object_;
  GameObject object_to_check_;
};
}  // namespace Model