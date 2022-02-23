#include "HealthComp.h"

HealthComp::HealthComp(int maxHealth, Actor* owner) :
	Componet::Componet()
{
	m_maxHealth = maxHealth;
	m_currentHealth = maxHealth;
	m_damageCooldown = 2;
	m_timeSinceLastHit = 0;
}

HealthComp::~HealthComp()
{

}

void HealthComp::start()
{
	m_currentHealth = m_maxHealth;
	m_timeSinceLastHit = 10;
}

void HealthComp::update(float deltaTime)
{
	m_timeSinceLastHit += deltaTime;

	if (m_currentHealth <= 0)
		getOwner()->end();
}

void HealthComp::onCollision(Actor* actor)
{
	if (actor->getName() == "Enemy1")
	{
		m_currentHealth--;
		m_timeSinceLastHit = 0;
	}
}
