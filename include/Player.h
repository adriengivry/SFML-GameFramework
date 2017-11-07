#pragma once

#include "Actor.h"
#include "Sprite.h"

namespace GameFramework
{
	enum Direction
	{
		RIGHT,
		LEFT,
		UP,
		DOWN
	};

	class Player : public Actor
	{
	public:
		Player();
		~Player() {}

		Sprite& GetSprite() { return m_sprite; }

		void Display() override;
		void Tick() override;

		void SetDirection(const Direction p_direction) { m_direction = p_direction; }

		void Move(const Direction p_direction);

	private:
		Sprite m_sprite;
		Direction m_direction;
		uint16_t m_speed = 10;
	};
}