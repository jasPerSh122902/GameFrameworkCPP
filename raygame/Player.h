#pragma once
<<<<<<< HEAD
#include "Charactor.h"

class Player :
	public Character
{
public:

    ~Player();
=======
#include "Actor.h"
class Input;
class Movement;
class Sprite;

class Player :
    public Actor
{
public:
>>>>>>> master

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="name">The name of this actor.</param>
<<<<<<< HEAD
    Player(float x, float y, int health, float speed, int maxHealth);
=======
    //Player(float x, float y, int health, float speed, int maxHealth);

    Player(float x, float y, const char* name) : Actor(x, y, name) {}
>>>>>>> master

    /// <summary>
    /// Called during the first update after an actor is added to a scene.
    /// </summary>
<<<<<<< HEAD
    virtual void start();

=======
     void start() override;
    void update(float deltaTime) override;

private:
    Input* m_inputComponet;
    Movement* m_movementComponet;
    Sprite* m_spriteComponet;
>>>>>>> master
};
