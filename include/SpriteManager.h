#pragma once

#include "Manager.h"

namespace GameFramework
{
	class SpriteManager : public Manager
	{
	public:
		SpriteManager();
		~SpriteManager();

		// TODO: Add a getter method to get a specific sprite (Found with key)

		void Setup() override;
		void Update() override;

	private:
		// TODO: Add a map of sprites
	};

}