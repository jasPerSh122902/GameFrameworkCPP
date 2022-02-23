#include "FollowComponet.h"
#include "Actor.h"
#include <Vector2.h>
#include "Transform2D.h"

FollowComponet::FollowComponet(Actor* owner, const char* name, Actor* targetActor) :
	Componet::Componet()
{
	m_targetActor = targetActor;
}

void FollowComponet::update(float deltaTime)
{
	MathLibrary::Vector2 targetDirection = (m_targetActor->getTransform()->getWorldPosition() - getOwner()->getTransform()->getWorldPosition()).getNormalized();

	getOwner()->getTransform()->setForward(targetDirection);
}
