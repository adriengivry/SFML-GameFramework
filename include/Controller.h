#pragma once

#include <map>

#include <SFML/Window/Event.hpp>

#include "Manager.h"
#include "Game.h"

namespace GameFramework
{
	class Game;

	class Command;

	class Controller : public Manager
	{
	public:
		explicit Controller(Game* p_game);
		virtual ~Controller();
		
		void BindCommand(const uint8_t p_key, Command* p_command);

		void Update() override;

	private:
		void Setup() override;

		Game* m_game = nullptr;

		std::map<uint8_t, Command*> m_commands;
	};
}