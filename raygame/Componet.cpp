#include "Componet.h"

Componet::Componet()
{
	m_owner = nullptr;
	m_name = "Null";
	m_stated = false;
}

Componet::Componet(Actor* actor, const char* name)
{
	m_owner = actor;
	m_name = name;
	m_stated = false;
}


Componet::~Componet()
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

void Componet::oncollison(Actor* actor)
{
}
