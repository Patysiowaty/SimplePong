#include "Listener.h"

Listener::~Listener() {}

void Listener::MoveObject(MoveDirection direction) {}

void Listener::UpdatePosition(SDL_Point position_) {}

void Listener::HitObject(ObjectBallBounced object) {}

void Listener::HandleEvent(SDL_Event& passed_event) {}

void Listener::RenderObject(const Model::GameObject& object,
                            const std::string& name) {}
