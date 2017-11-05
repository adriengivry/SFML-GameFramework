#include "GameInfo.h"

using namespace PlatformerEngine;

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

void GameInfo::Update()
{
	CalculateDeltaTime();
}

void GameInfo::CalculateDeltaTime()
{
	// TODO: Calculate Delta Time with SDL functions
}
