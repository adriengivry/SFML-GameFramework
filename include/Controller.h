#pragma once

#include <map>

#include <SFML/Window/Event.hpp>

#include "Manager.h"
#include "PlayerCommand.h"
#include "Game.h"

namespace GameFramework
{
	class Game;

	class Controller : public Manager
	{
	public:
		explicit Controller(Game* p_game);
		virtual ~Controller();
		
		void BindCommand(const uint8_t p_key, ICommand* p_command);

		void Update() override;

	private:
		void Setup() override;

		Game* m_game = nullptr;

		std::map<uint8_t, ICommand*> m_commands;
	};
}