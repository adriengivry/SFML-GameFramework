#pragma once

#include "Actor.h"
#include "Sprite.h"



namespace GameFramework
{
	class Player : public Actor
	{
	public:
		enum class Direction
		{
			RIGHT,
			LEFT,
			UP,
			DOWN
		};

		Player();
		~Player() {}

		Sprite& GetSprite() { return m_sprite; }


		void Display() override;
		void Move(const Direction p_direction);

	private:
		Sprite m_sprite;
	};
}