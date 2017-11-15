#include "Player.h"

using namespace GameFramework;

Player::Player() : Movable()
{
	SetObjectType("PLAYER");
	SetMaxSpeed(500);
}

void Player::Tick()
{
	// TODO: Player tick
}