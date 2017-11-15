#include "Game.h"

using namespace GameFramework;

Game::Game() : Manager()
{
	SetObjectType("GAME");
	Game::Setup();
}

Game::~Game()
{
	delete m_controller;
}


void Game::Setup()
{
	m_controller = new Controller(this);
}

void Game::Run()
{
	while (m_window.IsOpen())
	{
		Update();
	}
}

void Game::Update()
{
	m_controller->Update();

	m_gameInfo.Update();

	m_window.Clear();

	m_actorManager.Update();

	m_actorManager.Draw(m_window);

	Tick();

	m_window.Display();
	
}

void Game::Tick()
{
	// TODO: Game tick
}

void Game::Draw()
{
	m_userInterface.Draw();
}