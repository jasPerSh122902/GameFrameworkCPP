#pragma once
#include "Actor.h"
#include "Collider.h"
#include "Movement.h"
class Enemy :
	public Actor
{
public:
    Enemy();

    ~Enemy();

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="name">The name of this actor.</param>
    Enemy(float x, float y,int health, const char* name, ColliderType colliderType = CIRCLE);

    void getStarted();

    void onCollision();

    /// <summary>
    /// Called during the first update after an actor is added to a scene.
    /// </summary>
    virtual void start();

    /// <summary>
    /// Called every frame
    /// </summary>
    /// <param name="deltaTime">The time that has passed from the previous frame to the current</param>
    virtual void update(float deltaTime);

    /// <summary>
    /// Called every loop to update on screen visuals
    /// </summary>
    virtual void draw();

    /// <summary>
    /// Called when this actor is removed from the scene
    /// </summary>
    virtual void end();

private:
   bool m_started;
   const char* m_name;
   int m_health;

   Movement m_movement =  Movement();
   Componet* m_movementptr =  new Movement();
};

