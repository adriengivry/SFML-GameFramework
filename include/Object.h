#pragma once

#include <cstdint>
#include <string>

#include "Resources.h"

namespace PlatformerEngine
{
	class Object
	{
	public:
		Object();
		~Object();

		void SetObjectType(const std::string p_value) { m_objectType = p_value; }

		std::string& GetObjectType() { return m_objectType; }
		bool IsType(const std::string p_toCompare) { return m_objectType == p_toCompare; }

	protected:
		std::string m_objectType;
		static uint32_t s_createdObjects;
		static uint32_t s_instanceCounter;
		uint32_t m_objectId;
	};
}
