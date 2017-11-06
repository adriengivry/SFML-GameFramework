#pragma once

#include <iostream>

#include <SFML/System/Clock.hpp>

#include "Manager.h"

namespace PlatformerEngine
{
	class GameInfo : public Manager
	{
	public:
		GameInfo();
		virtual ~GameInfo();
		
		void Update() override;
		void CalculateDeltaTime();

		const float& GetDeltaTime() const { return m_deltaTime; }

	private:
		void Setup() override;

		sf::Clock m_clock;

		float m_lastTime;
		float m_thisTime;
		float m_deltaTime;
	};
}