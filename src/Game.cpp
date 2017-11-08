#include "Game.h"

using namespace GameFramework;

Game::Game() : Manager()
{
	SetObjectType("GAME");
	Game::Setup();
}

Game::~Game()
{
}


void Game::Setup()
{
	m_controller = new Controller(this);
}

void Game::Run()
{
	m_player.GetSprite().Load(LoadAsset("test.png"));

	while (m_window.IsOpen())
	{
		Update();
	}
}

void Game::Update()
{
	m_controller->Update();

	m_gameInfo.Update();

	m_player.Update();

	m_window.Clear();

	Tick();
	
	m_window.DrawThing(m_player.GetSprite().GetSprite());

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