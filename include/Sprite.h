#pragma once

#include <SFML/Graphics.hpp>

#include "Component.h"

namespace GameFramework
{
	class Sprite : public Component
	{
	public:
		Sprite();
		~Sprite();

		sf::Sprite& GetSprite() const { return *m_sprite; }

		void Load(const std::string& p_fileName);
		
	private:
		sf::Texture* m_texture;
		sf::Sprite* m_sprite;
	};
}