#pragma once

#include "Actor.h"
#include "Sprite.h"

namespace GameFramework
{
	class Drawable : public Actor
	{
	public:
		virtual ~Drawable() {}

		void Tick() override = 0;

		Sprite& GetSprite() { return m_sprite; }

	protected:
		Sprite m_sprite;
	};
}
