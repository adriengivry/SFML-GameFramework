#pragma once

#include "Manager.h"

namespace PlatformerEngine
{
	class Window : public Manager
	{
	public:
		static const uint16_t __DEFAULT_WIDTH = 1280;
		static const uint16_t __DEFAULT_HEIGHT = 720;

	public:
		Window();
		virtual ~Window();

		void Update() override;

	private:
		void Setup() override;

		// TODO: Add SFML Window components
	};
}