#pragma once

#include "Manager.h"

namespace PlatformerEngine
{
	class UserInterface : public Manager
	{
	public:
		UserInterface();
		virtual ~UserInterface();

		bool IsDrawable() const { return m_isDrawable; }
		void SetDrawable(const bool p_state) { m_isDrawable = p_state; }
		void Draw();
		void Update() override;

	private:
		void Setup() override;

		bool m_isDrawable;
	};
}