#pragma once

#include "Drawable.h"

namespace GameFramework
{
	enum Direction
	{
		RIGHT,
		LEFT,
	};

	class Movable : public Drawable
	{
	public:
		virtual ~Movable() {}

		void Tick() override = 0;

		void Update() override;

		void SetDirection(const Direction p_direction);

		void SetXVelocity(const float p_vx) { m_velocity.x = p_vx; }
		void SetYVelocity(const float p_vy) { m_velocity.y = p_vy; }

		void StartMoving();
		void StopMoving();

		void Move();
	protected:
		bool m_canMove = true;

		Sprite m_sprite;
		Direction m_direction = RIGHT;

		float m_maxSpeed = 10;
		sf::Vector2f m_velocity;

	};
}
