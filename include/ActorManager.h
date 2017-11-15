#pragma once

#include <map>
#include <list>

#include "Manager.h"
#include "Actor.h"
#include "Player.h"
#include "Utility.h"

namespace GameFramework
{
	class Game;

	class ActorManager : public Manager
	{
	public:
		ActorManager();
		~ActorManager();

		Player& GetPlayer() { return m_player; }

		void Setup() override;
		void Update() override;
		void Draw(Window& p_window);

	private:
		Player m_player;
		std::list<Actor*> m_actors;
		std::multimap<int, Drawable*> m_drawable;
	};
}