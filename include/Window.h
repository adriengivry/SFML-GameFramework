#pragma once

#include <iostream>

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
		void ApplyLetterBoxView(const uint16_t p_windowWidth, const uint16_t p_windowHeight);

		sf::RenderWindow& GetRenderWindow() { return m_renderWindow; }
		sf::View& GetView() { return m_view; }

		bool IsOpen() const { return m_renderWindow.isOpen(); }
		void Close() { m_renderWindow.close(); }
		bool PollEvent(sf::Event& p_event) { return m_renderWindow.pollEvent(p_event); }
		void DrawThing(sf::Drawable& p_toDraw);
		void Clear();
		void DrawView();
		void Display();
	private:
		void Setup() override;

		sf::RenderWindow m_renderWindow;
		sf::View m_view;
		sf::RectangleShape m_viewRect;
	};
}