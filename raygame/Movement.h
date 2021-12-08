#pragma once
#include "Componet.h"
#include <Vector2.h>

class Movement :
	public Componet
{
public:
	
	 void Update(float deltaTime);
private:
	int Directionx;
	int Directiony;
	float speed;
	MathLibrary::Vector2 m_velocity;
	MathLibrary::Vector2 m_LocalPosistion;
};

