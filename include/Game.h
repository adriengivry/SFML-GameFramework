#pragma once

#include "Controller.h"
#include "GameInfo.h"
#include "UserInterface.h"
#include "Window.h"
#include "Manager.h"
#include "Utility.h"
#include "ActorManager.h"


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
		ActorManager m_actorManager;
		UserInterface m_userInterface;
		Controller* m_controller;
	};
}
