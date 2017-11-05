#pragma once

#include "Manager.h"

namespace PlatformerEngine
{
	class Window : public Manager
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