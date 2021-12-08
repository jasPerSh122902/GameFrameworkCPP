#pragma once
#include "Actor.h"
class Player :
	public Actor
{
public:
    Player();
    ~Player();

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="name">The name of this actor.</param>
    Player(float x, float y, int health, const char* name, Collider collider);

    void getStarted();


    void onCollision();



private:
    bool m_started;
    const char* m_name;
    int m_health;
};

