#pragma once
#include "Componet.h"
#include "Actor.h"
class HealthComp :
<<<<<<< HEAD
    public Componet
=======
	public Componet
>>>>>>> master
{
public:
	HealthComp(int maxHealth, Actor* owner);
	~HealthComp();

	void start() override;
	void update(float deltaTime) override;

<<<<<<< HEAD
	void onCollision(Actor* actor) override;
=======
	void onCollision(Actor* actor);
>>>>>>> master

private:
	int m_maxHealth;
	int m_currentHealth;
};

