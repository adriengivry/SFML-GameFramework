#include "Player.h"

using namespace GameFramework;

Player::Player() : Actor()
{
	SetObjectType("PLAYER");
}

void Player::Display()
{
	// TODO: Player Display
}

void Player::Tick()
{
	Move(m_direction);
}

void Player::Move(const Direction p_direction)
{
	if (p_direction == Direction::RIGHT)
	{
		GetSprite().GetSprite().move(m_speed, 0);
	}
	else if (p_direction == Direction::LEFT)
	{
		GetSprite().GetSprite().move(-m_speed, 0);
	}
}