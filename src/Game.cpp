#include "Game.h"

PlatformerEngine::Game::Game() : GManager()
{
	SetGameObjectType("GAME");
	Game::Setup();
}

PlatformerEngine::Game::~Game()
{
}

void PlatformerEngine::Game::Setup()
{
	// TODO: Init game managers
}

void PlatformerEngine::Game::Update()
{
	// TODO: Call every managers update methods
}

void PlatformerEngine::Game::Tick()
{
	m_gameInfo.Update();
	m_window.Update();
	m_userInterface.Update();
	m_controller.Update();

}

void PlatformerEngine::Game::Draw()
{
	m_userInterface.Draw();
}
