#include "Player.h"

Player::Player()
{
	
}

Player::~Player()
{
	
}

Player::Player(float x, float y, int health, const char* name, ColliderType colliderType)
{
	health = m_health = 5;
	name = m_name;
	
}

void Player::getStarted()
{
	m_started = true;
}

void Player::onCollision()
{

}

void Player::start()
{
}

void Player::update(float deltaTime)
{
	update(deltaTime);
}

void Player::draw()
{

}

void Player::end()
{
	
}
