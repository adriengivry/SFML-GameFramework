#include "UserInterface.h"

using namespace GameFramework;

UserInterface::UserInterface()
{
	SetObjectType("USER_INTERFACE");
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
	{
		// TODO: Draw User interface
	}
}
