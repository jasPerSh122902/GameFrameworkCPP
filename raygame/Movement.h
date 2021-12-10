#pragma once
#include "Componet.h"
#include <Vector2.h>


class Movement :
	public Componet
{
public:
	
	 void Update(float deltaTime);
	 void Start();
	 void End();
private:
	int Directionx;
	int Directiony;
	float m_maxSpeed;
	MathLibrary::Vector2 m_velocity;
	
	
};

