#pragma once
#include "Charactor.h"

class Player :
	public Character
{
public:

    ~Player();

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="name">The name of this actor.</param>
    Player(float x, float y, int health, float speed, int maxHealth);

    /// <summary>
    /// Called during the first update after an actor is added to a scene.
    /// </summary>
    virtual void start();

};

