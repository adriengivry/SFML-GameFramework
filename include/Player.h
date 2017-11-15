#pragma once

#include "Movable.h"

namespace GameFramework
{
	class Player : public Movable
	{
	public:
		Player();
		~Player() {}

		void Tick() override;
	};
}
