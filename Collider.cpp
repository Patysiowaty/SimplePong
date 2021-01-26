#include "Collider.h"

namespace Model {
Collider::Collider(GameObject object, GameObject object_to_check)
    : object_{object}, object_to_check_{object_to_check} {}

bool Collider::CheckIsHit() {
  auto left_side_object = object_.GetObjectSize().x;
  auto left_side_object_to_check = object_to_check_.GetObjectSize().x;
  auto right_side_object =
      object_.GetObjectSize().x + object_.GetObjectSize().w;
  auto right_side_object_to_check =
      object_to_check_.GetObjectSize().x + object_to_check_.GetObjectSize().w;
  auto top_side_object = object_.GetObjectSize().y;
  auto top_side_object_to_check = object_to_check_.GetObjectSize().y;
  auto bottom_side_object =
      object_.GetObjectSize().y + object_.GetObjectSize().h;
  auto bottom_side_object_to_check =
      object_to_check_.GetObjectSize().y + object_to_check_.GetObjectSize().h;

  if (bottom_side_object <= top_side_object_to_check)
    return true;
  else if (top_side_object >= bottom_side_object_to_check)
    return true;
  else if (right_side_object <= left_side_object_to_check)
    return true;
  else if (left_side_object >= right_side_object_to_check)
    return true;
  else
    return false;
}
}  // namespace Model