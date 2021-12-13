#include "Input.h"
#include "Actor.h"
#include "Transform2D.h"

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
}
