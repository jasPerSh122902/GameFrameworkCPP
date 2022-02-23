#pragma once
#include "Componet.h"
class FollowComponet :
	public Componet

{
public:
	FollowComponet(Actor* owner, const char* name, Actor* targetActor);

	void update(float deltaTime) override;

private:
	Actor* m_targetActor;
};

