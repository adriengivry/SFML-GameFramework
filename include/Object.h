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
		virtual ~Object();

		void SetObjectType(const std::string p_value) { m_objectType = p_value; }

		std::string& GetObjectType() { return m_objectType; }

		bool IsType(const std::string p_toCompare) const { return m_objectType == p_toCompare; }

	protected:
		std::string m_objectType;

		static uint32_t s_objectCounter;
		static uint32_t s_objectTotalCounter;

		uint32_t m_objectId;
	};
}
