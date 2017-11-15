#pragma once

#include <iostream>

#include "Game.h"
#include "Component.h"

#define CREATE_COMMAND(command_name)\
		class command_name : public Command\
		{\
			void Execute(Game* GAME) override\
			{\

#define END_COMMAND()\
			}\
		};\
		
#define BIND_COMMAND(command_name, key_code)\
		BindCommand(sf::Keyboard::key_code, new command_name);

namespace GameFramework
{
	class Command : public Component
	{
	public:
		virtual ~Command() = default;

		void Activate() { m_isTriggered = true; }
		void Desactivate() { m_isTriggered = false; }
		bool IsTriggered() const { return m_isTriggered; }

		virtual void Execute(Game* GAME) = 0;

	private:
		bool m_isTriggered = false;
	};

	
}
