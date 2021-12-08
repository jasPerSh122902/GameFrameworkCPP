#include "Player.h"
#include "Movement.h"
#include "raylib.h"

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
    if (Actor.Enemey && _timer > 1)
    {
        //decrement health
        m_health--;

        //when you collide go orange
        Color(ORANGE);
        //closes window when player dies
        if (Health <= 0)
        {
            Engine.CloseApplication();
        }

        //reset time
        _timer = 0;
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
