#include "GObject.h"

using namespace PlatformerEngine;

uint32_t GObject::s_gameObjectCounter = 0;
uint32_t GObject::s_gameObjectTotalCounter = 0;

GObject::GObject()
{
	SetGameObjectType("GOBJECT");

	m_gameObjectId = s_gameObjectTotalCounter++;
	++s_gameObjectCounter;
}

GObject::~GObject()
{
	--s_gameObjectCounter;
}
