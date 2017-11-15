#pragma once

#include "Object.h"

namespace GameFramework
{
	class Actor : public Object
	{
	public:
		Actor();
		virtual ~Actor() = default;

		virtual void Update();

		virtual void Tick() = 0;

	protected:
		bool m_isUpdatable;
		bool m_isTickable;

	};

}