#pragma once

#include "GManager.h"

namespace PlatformerEngine
{
	class Game : public GManager
	{
	public:
		Game();
		virtual ~Game();

		void Setup() override;
		void Update() override;
	};
}