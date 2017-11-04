#pragma once

#include "GManager.h"

namespace PlatformerEngine
{
	class Window : public GManager
	{
	public:
		Window();
		virtual ~Window();

		void Update() override;

	private:
		void Setup() override;

		// TODO: Add SFML Window components
	};
}