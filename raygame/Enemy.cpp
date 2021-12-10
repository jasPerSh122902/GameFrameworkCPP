#include "Enemy.h"



Enemy::Enemy()
{

}

Enemy::Enemy(float x, float y,int health, const char* name, ColliderType colliderType)
{
	name = m_name;
	health = m_health = 5;

}
Enemy::~Enemy()
{
	delete m_name;
}

void Enemy::getStarted()
{
	m_started = true;
}

void Enemy::onCollision()
{

}

void Enemy::start()
{
}

void Enemy::update(float deltaTime)
{
	Actor::addComponent(m_movementptr*::Update(deltaTime));
}

void Enemy::draw()
{
}

void Enemy::end()
{
}
