#include "Input.h"
#include "Actor.h"
#include "Transform2D.h"

<<<<<<< HEAD
Input::Input(Actor* owner) { }

MathLibrary::Vector2 Input::getMoveAxis()
{
	float xDirection = -RAYLIB_H::IsKeyDown(KEY_A) + RAYLIB_H::IsKeyDown(KEY_D);
	float yDirection = -RAYLIB_H::IsKeyDown(KEY_S) + RAYLIB_H::IsKeyDown(KEY_W);

	return MathLibrary::Vector2(xDirection, yDirection);
		
}

void Input::update(float deltaTime)
{
	getOwner()->getTransform()->setForward(getMoveAxis());
=======

MathLibrary::Vector2 Input::getMoveAxis()
{
	//get the direction for the individual asis
	float xDirection = -RAYLIB_H::IsKeyDown(KEY_A) + RAYLIB_H::IsKeyDown(KEY_D);
	float yDirection = -RAYLIB_H::IsKeyDown(KEY_W) + RAYLIB_H::IsKeyDown(KEY_S);

	//returns a new vector representing the moved direction
	return MathLibrary::Vector2(xDirection, yDirection);
>>>>>>> master
}
