#pragma once

class Actor;

class Componet
{
public:
	//basuc constructor for componet
	Componet();

	//destructs the componet
	virtual ~Componet();

	//gets the ower that is assigned to the componet
	Actor* getOwner() { return m_owner; }

	/// <summary>
	/// Only allows you to set the owner if the owner is nullptr
	/// but is meant to assign a owner to a componet
	/// </summary>
	/// <param name="">The new owner of this component</param>
	void assignOwner(Actor* owner);

	//gets whether or not the start function for this componet instance has been called
	bool getStarted() { return m_stated; }

	//starts the componet 
	virtual void start() { m_stated = true; }
	//updates each componet by deltaTime
	virtual void update(float deltaTime);
	//draws the conponet
	virtual void draw();
	//is the end for the conponet
	virtual void end();
	//gives infomation on the collision
	virtual void oncollison(Actor* actor);

	virtual void onDistroy() {};

private:
	Actor* m_owner;
	bool m_stated;
};

