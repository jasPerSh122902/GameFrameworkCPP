#include "Movement.h"
#include "Charactor.h"
#include "Componet.h"
#include "Actor.h"

Movement::Movement(Actor* owner, float maxSpeed)
{
	m_maxSpeed = maxSpeed;
}

void Movement::update(float deltaTime)
{
	MathLibrary::Vector2 position = getOwner()->getTransform()->getLocalPosition();
	MathLibrary::Vector2 movement = MathLibrary::Vector2((position.x + (m_maxSpeed * deltaTime * getOwner()->getTransform()->getForward().x)),
		(position.y + (m_maxSpeed * deltaTime * getOwner()->getTransform()->getForward().y)));

	getOwner()->getTransform()->setLocalPosition(movement);
}

