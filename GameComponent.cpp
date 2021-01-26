#include "GameComponent.h"

GameComponent::GameComponent() {}

void GameComponent::SetMediator(Mediator* mediator) { mediator_ = {mediator}; }

void GameComponent::OnChanged(GameComponent* component) {
  mediator_->OnComponentChange(component);
}
