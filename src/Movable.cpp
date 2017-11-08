#include "Movable.h"

using namespace GameFramework;

void Movable::Update()
{
	Actor::Update();

	if (m_canMove)
	{
		Move();
	}
}

void Movable::SetDirection(const Direction p_direction)
{
	m_direction = p_direction;
}

void Movable::StartMoving()
{
	switch (m_direction)
	{
	case LEFT:
		m_velocity.x = -m_maxSpeed;
		break;

	case RIGHT:
		m_velocity.x = m_maxSpeed;
		break;
	}
}

void Movable::StopMoving()
{
	m_velocity.x = 0;
	m_velocity.y = 0;
}

void Movable::Move()
{
	GetSprite().GetSprite().move(m_velocity.x, m_velocity.y);
}
