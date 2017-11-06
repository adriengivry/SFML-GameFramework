#pragma once

#include "Object.h"

namespace GameFramework
{

	class Actor : public Object
	{
	public:
		Actor();
		virtual ~Actor() = 0;

		virtual void Display() = 0;

	};

}