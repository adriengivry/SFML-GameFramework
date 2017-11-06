#pragma once

#include "Object.h"

namespace GameFramework
{
	class Manager : public Object
	{
	public:
		Manager();
		virtual ~Manager();

		virtual void Setup() = 0;
		virtual void Update() = 0;
	};
}