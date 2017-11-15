#include "Movable.h"

using namespace GameFramework;

void Movable::Update()
{
	Actor::Update();
}

void Movable::SetDirection(const Direction p_direction)
{
	m_direction = p_direction;
}

void Movable::Move(const float p_deltaTime)
{
	if (m_canMove)
	{
		switch (m_direction)
		{
		case LEFT:
			SetXVelocity(-m_maxSpeed);
			SetYVelocity(0);
			break;

		case RIGHT:
			SetXVelocity(m_maxSpeed);
			SetYVelocity(0);
			break;

		case UP:
			SetXVelocity(0);
			SetYVelocity(-m_maxSpeed);
			break;

		case DOWN:
			SetXVelocity(0);
			SetYVelocity(m_maxSpeed);
			break;
		}

		GetSprite().GetSprite().move(m_velocity.x * p_deltaTime, m_velocity.y * p_deltaTime);
	}
}

void Movable::Draw(Window& p_window)
{
	p_window.DrawThing(GetSprite().GetSprite());
}