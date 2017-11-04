#pragma once

#include <cstdint>
#include <string>

#include "Resources.h"

namespace PlatformerEngine
{
	class GObject
	{
	public:
		GObject();
		virtual ~GObject();

		void SetGameObjectType(const std::string p_value) { m_gameObjectType = p_value; }

		std::string& GetGameObjectType() { return m_gameObjectType; }

		bool IsType(const std::string p_toCompare) const { return m_gameObjectType == p_toCompare; }

	protected:
		std::string m_gameObjectType;

		static uint32_t s_gameObjectCounter;
		static uint32_t s_gameObjectTotalCounter;

		uint32_t m_gameObjectId;
	};
}
