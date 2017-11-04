#include "Controller.h"

using namespace PlatformerEngine;

Controller::Controller()
{
	SetGameObjectType("CONTROLLER");
	Controller::Setup();
}

Controller::~Controller()
{
}

void Controller::Setup()
{
	// TODO: Initialize every PlatformerEgine::Event
}

void Controller::Update()
{
	// TODO: Check SFML events and modify every PlatformerEgine::Event
}
