#pragma once

#include "Object.h"

namespace GameFramework
{

	class Actor : public Object
	{
	public:
		Actor();
		virtual ~Actor() = default;

		virtual void Display() = 0;

		virtual void Tick() = 0;

	};

}