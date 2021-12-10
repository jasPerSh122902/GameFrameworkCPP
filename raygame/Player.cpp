#include "Player.h"
#include "Movement.h"
#include "raylib.h"
#include "Engine.h"

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
    //if actor is touched by teh enenmy end the game
    if (Actor::m_name = "Enemy")
    {
        //decrement health
        m_health--;

        //closes window when player dies
        if (m_health <= 0)
        {
            Engine::CloseApplication();
        }
    }
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
