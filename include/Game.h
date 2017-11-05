#pragma once

#include "Controller.h"
#include "GameInfo.h"
#include "UserInterface.h"
#include "Window.h"
#include "Manager.h"

namespace PlatformerEngine
{
	class Game : public Manager
	{
	public:
		Game();
		virtual ~Game();

		void Setup() override;
		void Update() override;
		void Tick();
		void Draw();

	private:
		GameInfo m_gameInfo;
		Window m_window;
		UserInterface m_userInterface;
		Controller m_controller;
	};
}
