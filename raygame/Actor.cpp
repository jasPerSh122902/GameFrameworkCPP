#include "Actor.h"
#include "Transform2D.h"
#include <string.h>
#include "Collider.h"
#include "Componet.h"

Actor::Actor()
{
    m_transform = new Transform2D(this);
}

Actor::~Actor()
{
    delete m_transform;
}


Actor::Actor(float x, float y, const char* name = "Actor")
{
    //Initialze default values
    m_transform = new Transform2D(this);
    m_transform->setLocalPosition({ x,y });
    m_name = name;
}

void Actor::start()
{
    m_started = true;
}

void Actor::onCollision(Actor* other)
{
}

Componet* Actor::addComponent(Componet* actor_componet)
{
    if (actor_componet->getOwner != nullptr)
        return nullptr;

    Componet** tempArray = new Componet * [m_componetsCount + 1];

    int j = 0;
    for (int i = 0; i < m_componetsCount; i++)
    {
        tempArray[i] = m_comp[i];
        j++;
    }

    tempArray[j] = actor_componet;
    m_componetsCount + 1;
    m_comp = tempArray;

    return actor_componet;
}

bool Actor::removeComponent(Componet* actor_componet)
{
    if (actor_componet->getOwner != nullptr)
        return false;

    bool componentRemoved = false;
    //Create a new array with a size one less than our old array
    Componet** newArray = new Componet * [m_componetsCount - 1];

    //Create variable to access tempArray index
    int j = 0;
    //Copy values from the old array to the new array
    for (int i = 0; i < m_componetsCount; i++)
    {
        if (actor_componet != m_comp[i])
        {
            newArray[j] = m_comp[i];
            j++;
        }
        else
        {
            componentRemoved = true;
        }
    }
    //Set the old array to the new array
    if (componentRemoved)
    {
        m_comp = newArray;
        m_componetsCount--;
    }
    //Return whether or not the removal was successful
    return componentRemoved;
}

Componet* Actor::getComponent(const char* actor_componet)
{
    for (int i = 0; i < m_componetsCount; i++)
    {
        if (m_comp[i]->getName() == actor_componet)
            return m_comp[i];
    }
    return nullptr;
}

void Actor::update(float deltaTime)
{
}

void Actor::draw()
{
}

void Actor::end()
{
    m_started = false;
}

void Actor::onDestroy()
{
    //Removes this actor from its parent if it has one
    if (getTransform()->getParent())
        getTransform()->getParent()->removeChild(getTransform());
}

bool Actor::checkForCollision(Actor* other)
{
    //Call check collision if there is a collider attached to this actor
    if (m_collider)
        return m_collider->checkCollision(other);

    return false;
}
