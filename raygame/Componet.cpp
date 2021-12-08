#include "Componet.h"

Componet::Componet()
{

}

Componet::Componet(Actor* owner, const char* name)
{
	owner = m_owner;
	name = m_name;

}

Componet::~Componet()
{
	delete m_owner;
	delete m_name;
}

const char* Componet::getName()
{
	if (m_name = nullptr)
		return nullptr;

	return m_name;
}

Actor* Componet::getOwner()
{
	if (m_owner = nullptr)
		return nullptr;
	return m_owner;
}

void Componet::start()
{

}

void Componet::update(float deltaTime)
{

}

void Componet::draw()
{

}

void Componet::end()
{

}

void Componet::oncollison(Actor* owner)
{

}
