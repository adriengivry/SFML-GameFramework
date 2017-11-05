#pragma once

#include "Manager.h"

namespace PlatformerEngine
{
	class GameInfo : public Manager
	{
	public:
		GameInfo();
		virtual ~GameInfo();
		
		void Update() override;

	private:
		void Setup() override;

		void CalculateDeltaTime();

		float m_lastTime;
		float m_thisTime;
		float m_deltaTime;
	};
}