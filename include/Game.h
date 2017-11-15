#pragma once

#include "Controller.h"
#include "GameInfo.h"
#include "UserInterface.h"
#include "Window.h"
#include "Manager.h"
#include "ActorManager.h"
#include "Utility.h"


namespace GameFramework
{
	class Controller;
	class Player;

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

		ActorManager& GetActorManager() { return m_actorManager; }
		GameInfo& GetGameInfo() { return m_gameInfo; }
		Window& GetWindow() { return m_window; }
		Player& GetPlayer() { return m_actorManager.GetPlayer(); }

	private:
		GameInfo m_gameInfo;
		Window m_window;
		UserInterface m_userInterface;
		ActorManager m_actorManager;
		Controller* m_controller;
	};
}
