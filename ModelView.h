#pragma once
#include "Renderer.h"
#include "Texture.h"
#include "ModelListener.h"
#include "GameObject.h"
namespace View {
class ModelView : public ModelListener {
 public:
  ModelView(Renderer& renderer_);

  void InitializeView(GameObject object);

  void UpdateData(SDL_Point point) override;
  void Render();

 private:
  Renderer& renderer_;
  Texture texture_;

};
}  // namespace View
