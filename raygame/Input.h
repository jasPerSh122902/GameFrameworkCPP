#pragma once
#include "Componet.h"
#pragma once
#include "Componet.h"
#include <raylib.h>
#include <Vector2.h>


class Input :
	public Componet
{
public:
	Input(const char* name = "InputComponet") : Componet::Componet() {}

	MathLibrary::Vector2 getMoveAxis();

private:
	//actions keys that are actives
	//attack key
	RAYLIB_H::KeyboardKey m_swing = RAYLIB_H::KeyboardKey::KEY_SPACE;
	//move player keys
	RAYLIB_H::KeyboardKey m_down= RAYLIB_H::KeyboardKey::KEY_S;
	RAYLIB_H::KeyboardKey m_left= RAYLIB_H::KeyboardKey::KEY_A;
	RAYLIB_H::KeyboardKey m_up = RAYLIB_H::KeyboardKey::KEY_W;
	RAYLIB_H::KeyboardKey m_right = RAYLIB_H::KeyboardKey::KEY_D;
	//look direction keys
	/*RAYLIB_H::KeyboardKey m_lookDown = RAYLIB_H::KeyboardKey::KEY_DOWN;
	RAYLIB_H::KeyboardKey m_lookLeft = RAYLIB_H::KeyboardKey::KEY_LEFT;
	RAYLIB_H::KeyboardKey m_lookUp = RAYLIB_H::KeyboardKey::KEY_UP;
	RAYLIB_H::KeyboardKey m_lookRight = RAYLIB_H::KeyboardKey::KEY_RIGHT;*/

	
};

