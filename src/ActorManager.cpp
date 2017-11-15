#include "ActorManager.h"

using namespace GameFramework;

ActorManager::ActorManager() : Manager()
{
	SetObjectType("ACTOR_MANAGER");
	ActorManager::Setup();
}

ActorManager::~ActorManager()
{
	for (auto it = m_actors.begin(); it != m_actors.end(); ++it)
	{
		m_actors.erase(it);
		delete *it;
	}
}

void ActorManager::Setup()
{
	m_player.GetSprite().Load(LoadAsset("test.png"));
	m_drawable.insert(std::pair<int, Drawable*>(1, &m_player));
}

void ActorManager::Update()
{
	for (auto it = m_actors.begin(); it != m_actors.end(); ++it)
		(*it)->Update();
}

void ActorManager::Draw(Window& p_window)
{
	for (auto it = m_drawable.begin(); it != m_drawable.end(); ++it)
		it->second->Draw(p_window);
}
