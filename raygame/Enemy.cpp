#include "Enemy.h"
<<<<<<< HEAD
#include "Movement.h"

Enemy::Enemy(float x, float y, const char* name, float speed, int maxHealth, Actor* targetActor):
	Character::Character(x,y,name,speed,maxHealth)
{
	m_targetActor = targetActor;
}

void Enemy::start()
{
	Character::start();
	Movement* movementComponet = new Movement(this, 5);
	addComponent(movementComponet);
=======
#include "Input.h"
#include "Movement.h"
#include "Sprite.h"

Enemy::Enemy(float x, float y, const char* name,Actor* targetActor) :
	Actor(x,y,name)
{
	m_targetActor = targetActor;
}



void Enemy::start()
{
	m_movementComponet = dynamic_cast<Movement*>(addComponent(new Movement()));
	m_movementComponet->setMaxSpeed(50);
	m_spriteComponet = dynamic_cast<Sprite*>(addComponent(new Sprite("Sprite/Larrot.png")));
}

void Enemy::update(float deltaTime)
{
	Actor::update(deltaTime);
	//allows for movement
	MathLibrary::Vector2 moveDirection = m_inputComponet->getMoveAxis();

	m_movementComponet->setVelocity(moveDirection * 30);
>>>>>>> master
}
