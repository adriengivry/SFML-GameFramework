#include "Object.h"

using namespace PlatformerEngine;

uint32_t Object::s_objectCounter = 0;
uint32_t Object::s_objectTotalCounter = 0;

Object::Object()
{
	SetObjectType("OBJECT");

	m_objectId = s_objectTotalCounter++;
	++s_objectCounter;
}

Object::~Object()
{
	--s_objectCounter;
}
