#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::Enemy(float x, float y,int health, const char* name, Collider collider)
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
