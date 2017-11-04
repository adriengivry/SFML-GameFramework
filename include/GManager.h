#pragma once

#include "GObject.h"

namespace PlatformerEngine
{
	class GManager : public GObject
	{
	public:
		GManager();
		virtual ~GManager();

		virtual void Setup() = 0;
		virtual void Update() = 0;
	};
}