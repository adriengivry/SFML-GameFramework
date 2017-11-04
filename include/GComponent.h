#pragma once

#include "GObject.h"

namespace PlatformerEngine
{
	class GComponent : public GObject
	{
	public:
		GComponent();
		virtual ~GComponent();
	};
}