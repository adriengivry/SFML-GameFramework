#pragma once

#include "Actor.h"

enum class Direction
{
	RIGHT,
	LEFT,
	UP,
	DOWN
};

namespace GameFramework
{
	class Player : public Actor
	{
	public:
		Player();
		~Player() {}

		void Display() override;
		void Move(const Direction p_direction);
	};
}