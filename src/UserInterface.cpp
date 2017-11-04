#include "UserInterface.h"

using namespace PlatformerEngine;

UserInterface::UserInterface()
{
	SetGameObjectType("USER_INTERFACE");
	UserInterface::Setup();
}

UserInterface::~UserInterface()
{
}

void UserInterface::Setup()
{
	SetDrawable(true);
}

void UserInterface::Update()
{
	
}

void UserInterface::Draw()
{
	if (IsDrawable())
		Draw();
}
