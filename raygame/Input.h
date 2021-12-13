#pragma once
#include "Componet.h"
#include <raylib.h>
#include <Vector2.h>

class Input :
	public Componet
{
public:
	Input(Actor* owner);

	MathLibrary::Vector2 getMoveAxis();
	void update(float deltaTime);

};

