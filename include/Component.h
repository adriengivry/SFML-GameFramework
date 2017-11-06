#pragma once

#include "Object.h"

namespace GameFramework
{
	class Component : public Object
	{
	public:
		Component();
		virtual ~Component();
	};
}