#include "GameInfo.h"

using namespace GameFramework;

GameInfo::GameInfo()
{
	SetObjectType("GAME_INFO");
	GameInfo::Setup();
}

GameInfo::~GameInfo()
{
}

void GameInfo::Setup()
{
	m_lastTime = 0;
	m_thisTime = 0;
	m_deltaTime = 0;
}

void GameInfo::CalculateDeltaTime()
{
	m_lastTime = m_thisTime;
	m_thisTime = m_clock.getElapsedTime().asSeconds();
	m_deltaTime = m_thisTime - m_lastTime;
}

void GameInfo::Update()
{
	CalculateDeltaTime();

	if (DEBUG_DISPLAY)
	{
		system("CLS");
		std::cout << "DELTA TIME: " << m_deltaTime << std::endl;
	}
}
