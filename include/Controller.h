#pragma once

#include "Manager.h"

namespace PlatformerEngine
{
	class Controller : public Manager
	{
	public:
		Controller();
		virtual ~Controller();
		
		void Update() override;

	private:
		void Setup() override;

		// TODO: Adding some PlatformerEgine::Event which will be altered by the update method
	};
}