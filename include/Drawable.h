#pragma once

#include "Actor.h"
#include "Sprite.h"
#include "Window.h"

namespace GameFramework
{
	class Drawable : public Actor
	{
	public:
		virtual ~Drawable() {}

		void Tick() override = 0;

		Sprite& GetSprite() { return m_sprite; }

		virtual void Draw(Window& p_window) = 0;

	protected:
		Sprite m_sprite;
	};
}
