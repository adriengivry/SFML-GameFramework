#pragma once

#include "Controller.h"
#include "GameInfo.h"
#include "UserInterface.h"
#include "Window.h"
#include "Manager.h"
#include "Utility.h"

namespace PlatformerEngine
{
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

		void HandleEvents();

	private:
		GameInfo m_gameInfo;
		Window m_window;
		UserInterface m_userInterface;
		Controller m_controller;

		sf::Texture m_texture;
		sf::Sprite m_sprite;
	};
}
