#pragma once
#include "Componet.h"
#include <Vector2.h>
#include "Transform2D.h"



class Movement :
	public Componet
{
public:
<<<<<<< HEAD
	Movement(Actor* owner, float maxSpeed);

	MathLibrary::Vector2 getVelocity() { return m_velocity; }
	float getMaxSpeed() { return m_maxSpeed; }
	void setMaxSpeed(float maxSpeed) { m_maxSpeed = maxSpeed; }
	MathLibrary::Vector2 getDirection() { return m_direction; }
	MathLibrary::Vector2 setDirection(MathLibrary::Vector2 direction) { m_direction = direction; }

	void update(float deltaTime);
	 
=======
	//base comstroctor for the movement
	Movement(const char* name = "MoveComponet") : Componet::Componet(name) {}

	/// <summary>
	/// Gets the current speed and direction of theis actor in the form of a velocity
	/// </summary>
	/// <returns></returns>
	MathLibrary::Vector2 getVelocity() { return m_velocity; }
	/// <summary>
	/// sets the current speed and direction of this actor.
	/// </summary>
	/// <param name="velocity"></param>
	void setVelocity(MathLibrary::Vector2 velocity) { m_velocity = velocity; }

	//gets the max speed of the actor velocity vector
	float getMaxSpeed() { return m_maxSpeed; }
	/// <summary>
	/// sets the maximum magnitude of this actors velocity vector
	/// </summary>
	/// <param name="maxSpeed"></param>
	void setMaxSpeed(float maxSpeed) { m_maxSpeed = maxSpeed; }

	//Inherited from componet class
	void update(float deltaTime) override;

>>>>>>> master
private:

	float m_maxSpeed;
	MathLibrary::Vector2 m_velocity;
<<<<<<< HEAD
	MathLibrary::Vector2 m_direction;
	
	
};
=======
>>>>>>> master


};