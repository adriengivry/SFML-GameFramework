#pragma once

#include <iostream>

#include "Component.h"

namespace GameFramework
{
	class ICommand : public Component
	{
	public:
		virtual ~ICommand() = default;
		virtual void Execute() = 0;
	};
}
