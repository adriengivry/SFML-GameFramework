#pragma once

#include "Controller.h"
#include "GameInfo.h"
#include "UserInterface.h"
#include "Window.h"
#include "Manager.h"
#include "Utility.h"

#include "Player.h"

namespace GameFramework
{
	class Controller;

	class Game : public Manager
	{
	public:
		Game();
		virtual ~Game();

		void Setup() override;
		void Update() override;

		void Run();
		void Tick();
		void Draw();

		Player& GetPlayer() { return m_player; }

		Window& GetWindow() { return m_window; }

	private:
		GameInfo m_gameInfo;
		Window m_window;
		UserInterface m_userInterface;
		Controller* m_controller;

		Player m_player;
	};
}
