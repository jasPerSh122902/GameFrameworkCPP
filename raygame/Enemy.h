#pragma once
#include "Actor.h"
class Enemy :
	public Actor
{
public:
    Enemy();
    ~Enemy();

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="name">The name of this actor.</param>
    Enemy(float x, float y,int health, const char* name, Collider collider);

    void getStarted();
    

    void onCollision();



private:
   bool m_started;
   const char* m_name;
   int m_health;
};

