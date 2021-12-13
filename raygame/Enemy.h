#pragma once
<<<<<<< HEAD
#include "Charactor.h"
=======
#include "Actor.h"
class Input;
class Movement;
class Sprite;

>>>>>>> master
class Enemy :
    public Character
{
public:
<<<<<<< HEAD
	Enemy(float x, float y, const char* name, float speed, int maxHealth, Actor* targetActor);
	~Enemy() {}

	void start() override;

private:
	Actor* m_targetActor;
=======
	Enemy(float x, float y, const char* name, Actor* targetActor);
	~Enemy() {}

	void start() override;
	void update(float deltaTime) override;

private:
	Actor* m_targetActor;
	Input* m_inputComponet;
	Movement* m_movementComponet;
	Sprite* m_spriteComponet;
>>>>>>> master
};

