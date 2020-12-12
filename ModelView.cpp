#include "ModelView.h"

View::ModelView::ModelView(Renderer& renderer) : renderer_{renderer} {}

void View::ModelView::InitializeView(GameObject object) {
  texture_.CreateTexture(object.GetSurface(), renderer_.GetRenderer());
  texture_.SetTextureSize(object.GetObjectSize());
}

void View::ModelView::UpdateData(SDL_Point position) {
  texture_.SetTexturePosition(position);
  SDL_RenderClear(renderer_.GetRenderer());
}

void View::ModelView::Render() {
  SDL_RenderCopy(renderer_.GetRenderer(), texture_.GetTexture(), NULL,
                 texture_.GetTextureSize());
}
