#include "Componet.h"

Componet::Componet()
{
	m_owner = nullptr;
	m_name = "Null";
	m_stated = false;
}

Componet::Componet( const char* name)
{
	m_name = name;
	m_stated = false;
}


Componet::~Componet()
{

}

void Componet::assignOwner(Actor* owner)
{
	if (!getOwner())
		return;

	m_owner = owner;
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

void Componet::oncollison(Actor* actor)
{
}