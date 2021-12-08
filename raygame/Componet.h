#pragma once
#include "Actor.h"
class Componet :
	public Actor
{
public:
	//basuc constructor for componet
	Componet();

	//is a constructor for componet that takes in a pointer actor and a const char pointer
	Componet(Actor* actor, const char*);

	//destructs the componet
	virtual ~Componet();

	//gets the name of the componet
	const char* getName();

	//gets the ower that is assigned to the componet
	Actor* getOwner();

	//starts the componet 
	virtual void start();
	//updates each componet by deltaTime
	virtual void update(float deltaTime);
	//draws the conponet
	virtual void draw();
	//is the end for the conponet
	virtual void end();
	//gives infomation on the collision
	virtual void oncollison(Actor*);

private:
	Actor* m_owner;
	const char* m_name;
	bool m_stated;
};

