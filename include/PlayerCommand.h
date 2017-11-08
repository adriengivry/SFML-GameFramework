#pragma once

#include "Player.h"

#define ADD_PLAYER_COMMAND(name, action)\
	class name : public PlayerCommand\
	{\
	public:\
		explicit name(Player& p_target) : PlayerCommand(p_target) {}\
		void Execute() override\
		{\
			action\
		}\
	};\

#include "ICommand.h"

namespace GameFramework
{
	class PlayerCommand : public ICommand
	{
	public:
		explicit PlayerCommand(Player& p_target) : m_target(p_target) {}
		Player& GetTarget() const { return m_target; }

	private:
		Player& m_target;
		void Execute() override = 0;
	};

	ADD_PLAYER_COMMAND(MoveLeft,
		GetTarget().SetDirection(Direction::LEFT);
		GetTarget().StartMoving();
	)

	ADD_PLAYER_COMMAND(MoveRight,
		GetTarget().SetDirection(Direction::RIGHT);
		GetTarget().StartMoving();
	)
}