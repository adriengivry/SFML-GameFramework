#include "Object.h"

using namespace PlatformerEngine;

uint32_t Object::s_createdObjects = 0;
uint32_t Object::s_instanceCounter = 0;

Object::Object()
{
	SetObjectType("OBJECT");

	m_objectId = s_createdObjects++;
	++s_instanceCounter;
}

Object::~Object()
{
	--s_instanceCounter;
}
