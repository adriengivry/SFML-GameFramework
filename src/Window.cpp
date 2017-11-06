#include "Window.h"

using namespace PlatformerEngine;

uint16_t Window::__WINDOW_WIDTH		= WINDOW_DEFAULT_WIDTH;
uint16_t Window::__WINDOW_HEIGHT	= WINDOW_DEFAULT_HEIGHT;

bool Window::__ENABLE_FULLSCREEN	= WINDOW_ENABLE_FULLSCREEN;
bool Window::__ENABLE_VSYNC			= WINDOW_ENBABLE_VSYNC;
uint8_t	Window::__CURRENT_FRAMERATE = DEFAULT_FRAMERATE;

Window::Window()
{
	SetObjectType("WINDOW");
	Window::Setup();
}

Window::~Window()
{
}

void Window::Setup()
{
	m_renderWindow.create(sf::VideoMode(__WINDOW_WIDTH, __WINDOW_HEIGHT), "SFML 2D Platformer Engine");
	m_renderWindow.setVerticalSyncEnabled(__ENABLE_VSYNC);
	m_renderWindow.setFramerateLimit(__CURRENT_FRAMERATE);

	m_view = m_renderWindow.getView();
}

void Window::Update()
{
	m_renderWindow.clear(sf::Color::Red);
	m_renderWindow.display();
}

void Window::ApplyLetterBoxView()
{
	const float windowRatio = __WINDOW_WIDTH / __WINDOW_HEIGHT;
	const float viewRatio = m_view.getSize().x / m_renderWindow.getSize().y;
	float sizeX = 1.0f;
	float sizeY = 1.0f;
	float posX = 0.0f;
	float posY = 0.0f;
	bool horizontalSpacing = true;

	if (windowRatio < viewRatio)
		horizontalSpacing = false;

	if (horizontalSpacing)
	{
		sizeX = viewRatio / windowRatio;
		posX = (1 - sizeX) / 2.0f;
	}
	else
	{
		sizeY = windowRatio / viewRatio;
		posY = (1 - sizeY) / 2.0f;
	}

	m_view.setViewport(sf::FloatRect(posX, posY, sizeX, sizeY));

	// TODO: FloatRect optimization
}
