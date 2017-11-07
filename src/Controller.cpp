#include "Controller.h"

using namespace GameFramework;

Controller::Controller(Game* p_game) : m_game(p_game)
{
	SetObjectType("CONTROLLER");
	Controller::Setup();
}

Controller::~Controller()
{
	for (auto it = m_commands.begin(); it != m_commands.end(); ++it)
		delete (*it).second;
}

void Controller::BindCommand(const uint8_t p_key, ICommand* p_command)
{
	m_commands[p_key] = p_command;
}

void Controller::Update()
{
	sf::Event event;

	while (m_game->GetWindow().PollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::KeyPressed:
			if (m_commands.find(event.key.code) != m_commands.end())
				this->m_commands[event.key.code]->Execute();
			break;

		case sf::Event::Resized:
			m_game->GetWindow().ApplyLetterBoxView(event.size.width, event.size.height);
			break;

		case sf::Event::Closed:
			m_game->GetWindow().Close();

		default:
			break;
		}
	}
}

void Controller::Setup()
{
	BindCommand(sf::Keyboard::Left, new MoveLeft(m_game->GetPlayer()));
	BindCommand(sf::Keyboard::Right, new MoveRight(m_game->GetPlayer()));
}
