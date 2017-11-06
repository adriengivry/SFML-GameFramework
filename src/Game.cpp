#include "Game.h"

PlatformerEngine::Game::Game() : Manager()
{
	SetObjectType("GAME");
	Game::Setup();
}

PlatformerEngine::Game::~Game()
{
}

void PlatformerEngine::Game::Setup()
{
	// TODO: Init game managers
}

void PlatformerEngine::Game::Run()
{
	m_texture.loadFromFile(LoadAsset("test.png"));
	m_sprite.setTexture(m_texture);

	while (m_window.IsOpen())
	{
		Update();
	}
}

void PlatformerEngine::Game::Update()
{
	HandleEvents();

	m_gameInfo.Update();

	m_window.Clear();

	Tick();
	
	m_window.DrawThing(m_sprite);

	m_window.Display();
	
}

void PlatformerEngine::Game::Tick()
{
	// TODO: Game Tick
}

void PlatformerEngine::Game::Draw()
{
	m_userInterface.Draw();
}

void PlatformerEngine::Game::HandleEvents()
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
