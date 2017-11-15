#pragma once

#include "Drawable.h"

namespace GameFramework
{
	enum Direction
	{
		RIGHT,
		LEFT,
		UP,
		DOWN
	};

	class Movable : public Drawable
	{
	public:
		const float GRAVITY_VELOCITY = 0.01;
	
		virtual ~Movable() {}

		void SetDirection(const Direction p_direction);
		void SetMaxSpeed(const float p_maxSpeed) { m_maxSpeed = p_maxSpeed; }
		void SetXVelocity(const float p_vx) { m_velocity.x = p_vx; }
		void SetYVelocity(const float p_vy) { m_velocity.y = p_vy; }
		void SetPhysic(const bool p_newState) { m_isPhysic = p_newState; }

		bool IsPhysic() const { return m_isPhysic; }

		void Update() override;
		void Tick() override = 0;
		void Move(const float p_deltaTime);
		void Draw(Window& p_window) override;

	protected:
		bool m_canMove = true;
		bool m_isPhysic = false;

		Direction m_direction = RIGHT;

		float m_maxSpeed = 300;

		sf::Vector2f m_velocity;
	};
}
