#include "Sprite.h"

using namespace GameFramework;

Sprite::Sprite() : Component(), m_texture(nullptr), m_sprite(nullptr)
{
	SetObjectType("SPRITE");
}

Sprite::~Sprite()
{
	if (m_sprite)
		delete m_sprite;

	if (m_texture)
		delete m_texture;
}

void Sprite::Load(const std::string& p_fileName)
{
	m_texture = new sf::Texture();

	if (m_texture)
		m_texture->loadFromFile(p_fileName);

	m_sprite = new sf::Sprite(*m_texture);
}
