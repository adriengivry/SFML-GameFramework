#include "Window.h"

using namespace GameFramework;

uint16_t	Window::__WINDOW_WIDTH		=	WINDOW_DEFAULT_WIDTH;
uint16_t	Window::__WINDOW_HEIGHT		=	WINDOW_DEFAULT_HEIGHT;

bool		Window::__ENABLE_FULLSCREEN	=	WINDOW_ENABLE_FULLSCREEN;
bool		Window::__ENABLE_VSYNC		=	WINDOW_ENBABLE_VSYNC;
uint8_t		Window::__CURRENT_FRAMERATE	=	DEFAULT_FRAMERATE;

Window::Window()
{
	SetObjectType("WINDOW");
	Window::Setup();
}

Window::~Window()
{
}

void Window::DrawThing(sf::Drawable& p_toDraw)
{
	m_renderWindow.draw(p_toDraw);
}

void Window::Clear()
{
	m_renderWindow.clear();
	DrawView();
}

void Window::DrawView()
{
	m_viewRect.setSize(sf::Vector2f(m_view.getSize().x, m_view.getSize().y));
	m_viewRect.setFillColor(sf::Color::Blue);
	DrawThing(m_viewRect);
}

void Window::Display()
{
	m_renderWindow.display();
}

void Window::Setup()
{
	m_renderWindow.create(sf::VideoMode(__WINDOW_WIDTH, __WINDOW_HEIGHT), "SFML 2D Platformer Engine", __ENABLE_FULLSCREEN ? sf::Style::Fullscreen : sf::Style::Default);
	m_renderWindow.setVerticalSyncEnabled(__ENABLE_VSYNC);
	m_renderWindow.setFramerateLimit(__CURRENT_FRAMERATE);
	

	m_view = m_renderWindow.getView();
}

void Window::Update()
{
}

void Window::ApplyLetterBoxView(const uint16_t p_windowWidth, const uint16_t p_windowHeight)
{
	__WINDOW_WIDTH	= p_windowWidth;
	__WINDOW_HEIGHT = p_windowHeight;

	const float windowRatio = __WINDOW_WIDTH / static_cast<float>(__WINDOW_HEIGHT);
	const float viewRatio = m_view.getSize().x / static_cast<float>(m_view.getSize().y);

	sf::FloatRect rect(0.0f, 0.0f, 1.0f, 1.0f);

	if (!(windowRatio < viewRatio))
	{
		rect.width = viewRatio / windowRatio;
		rect.left = (1 - rect.width) / 2.0f;
	}
	else
	{
		rect.height = windowRatio / viewRatio;
		rect.top = (1 - rect.height) / 2.0f;
	}

	m_view.setViewport(rect);
	m_renderWindow.setView(m_view);
}
