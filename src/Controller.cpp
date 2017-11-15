#include "Controller.h"
#include "Command.h"

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

void Controller::BindCommand(const uint8_t p_key, Command* p_command)
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
				this->m_commands[event.key.code]->Activate();
			break;

		case sf::Event::KeyReleased:
			if (m_commands.find(event.key.code) != m_commands.end())
				this->m_commands[event.key.code]->Desactivate();
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

	for (auto it = m_commands.begin(); it != m_commands.end(); ++it)
		if (it->second->IsTriggered())
			it->second->Execute(m_game);
}

void Controller::Setup()
{
	CREATE_COMMAND(MoveLeft)
		GAME->GetPlayer().SetDirection(LEFT);
		GAME->GetPlayer().Move(GAME->GetGameInfo().GetDeltaTime());
	END_COMMAND()

	CREATE_COMMAND(MoveRight)
		GAME->GetPlayer().SetDirection(RIGHT);
		GAME->GetPlayer().Move(GAME->GetGameInfo().GetDeltaTime());
	END_COMMAND()

	CREATE_COMMAND(MoveUp)
		GAME->GetPlayer().SetDirection(UP);
		GAME->GetPlayer().Move(GAME->GetGameInfo().GetDeltaTime());
	END_COMMAND()

	CREATE_COMMAND(MoveDown)
		GAME->GetPlayer().SetDirection(DOWN);
		GAME->GetPlayer().Move(GAME->GetGameInfo().GetDeltaTime());
	END_COMMAND()

	BIND_COMMAND(MoveUp, W);
	BIND_COMMAND(MoveLeft, A);
	BIND_COMMAND(MoveDown, S);
	BIND_COMMAND(MoveRight, D);

	BIND_COMMAND(MoveUp, Up);
	BIND_COMMAND(MoveLeft, Left);
	BIND_COMMAND(MoveDown, Down);
	BIND_COMMAND(MoveRight, Right);
}
