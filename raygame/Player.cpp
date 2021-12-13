#include "Player.h"
#include "Input.h"

Player::~Player()
{
	
}

Player::Player(float x, float y, int health, float speed, int maxHealth) :
	Character::Character(x,y,m_name,speed,maxHealth)
{}


void Player::start()
{
	Character::start();
	Input* inputCompent = new Input(this);
	addComponent(inputCompent);
}
