#pragma once

#include <SFML/Graphics.hpp>

#include "Manager.h"

namespace PlatformerEngine
{
	class Window : public Manager
	{
	public:
		static uint16_t __WINDOW_WIDTH;
		static uint16_t __WINDOW_HEIGHT;

		static uint8_t	__CURRENT_FRAMERATE;
		static bool		__ENABLE_FULLSCREEN;
		static bool		__ENABLE_VSYNC;

	public:
		Window();
		virtual ~Window();

		void Update() override;
		void ApplyLetterBoxView();

		sf::RenderWindow& GetRenderWindow() { return m_renderWindow; }
		bool IsOpen() const { return m_renderWindow.isOpen(); }
		void Close() { m_renderWindow.close(); }
		bool PollEvent(sf::Event& p_event) { return m_renderWindow.pollEvent(p_event); }
	private:
		void Setup() override;

		sf::RenderWindow m_renderWindow;
		sf::View m_view;
	};
}