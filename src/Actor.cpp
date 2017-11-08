#include "Actor.h"

using namespace GameFramework;

Actor::Actor() : Object()
{
	SetObjectType("ACTOR");
	m_isUpdatable = true;
	m_isTickable = true;
}

void Actor::Update()
{
	if (m_isUpdatable)
	{
		if (m_isTickable)
		{
			Tick();
		}
	}
}
