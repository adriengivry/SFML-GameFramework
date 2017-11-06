#include "Object.h"

using namespace GameFramework;

uint32_t Object::__OBJECT_COUNTER = 0;
uint32_t Object::__OBJECT_TOTAL_COUNTER = 0;

Object::Object()
{
	SetObjectType("OBJECT");

	m_objectId = __OBJECT_TOTAL_COUNTER++;
	++__OBJECT_COUNTER;
}

Object::~Object()
{
	--__OBJECT_COUNTER;
}
