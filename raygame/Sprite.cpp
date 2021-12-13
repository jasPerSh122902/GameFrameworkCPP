#include "Sprite.h"
#include "Actor.h"
#include "Transform2D.h"

Sprite::Sprite(const char* path, Actor* owner)
{
	m_texture = RAYLIB_H::LoadTexture(path);
}

void Sprite::draw()
{
	RAYLIB_H::DrawTexture(m_texture, getOwner()->getTransform()->getWorldPosition().x, getOwner()->getTransform()->getWorldPosition().y, BLUE);
}


