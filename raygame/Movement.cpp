#include "Movement.h"
<<<<<<< HEAD
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
=======
#include "Actor.h"
#include "Transform2D.h"

void Movement::update(float deltaTime)
{
	//add the new vbelocity to the old position to get the new position
	MathLibrary::Vector2 newPosition = getOwner()->getTransform()->getLocalPosition() + getVelocity() * deltaTime;

	//set the actors position to be the new position found
	getOwner()->getTransform()->setLocalPosition(newPosition);
}

>>>>>>> master
