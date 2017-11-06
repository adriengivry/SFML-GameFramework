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
	// TODO: Init game managers
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
	HandleEvents();

	m_gameInfo.Update();

	m_window.Clear();

	Tick();
	
	m_window.DrawThing(m_player.GetSprite().GetSprite());

	m_window.Display();
	
}

void Game::Tick()
{
	// TODO: Game Tick
}

void Game::Draw()
{
	m_userInterface.Draw();
}

void Game::HandleEvents()
{
	sf::Event event;

	while (m_window.PollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Resized:
			m_window.ApplyLetterBoxView(event.size.width, event.size.height);
			break;

		case sf::Event::Closed:
			m_window.Close();

		default:
			break;
		}
	}
}
