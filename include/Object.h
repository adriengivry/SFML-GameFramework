#pragma once

#include <cstdint>
#include <string>

#include "Resources.h"

namespace GameFramework
{
	class Object
	{
	public:
		static uint32_t __OBJECT_COUNTER;
		static uint32_t __OBJECT_TOTAL_COUNTER;

	public:
		Object();
		virtual ~Object();

		void SetObjectType(const std::string p_value) { m_objectType = p_value; }

		std::string& GetObjectType() { return m_objectType; }

		bool IsType(const std::string p_toCompare) const { return m_objectType == p_toCompare; }

	protected:
		std::string m_objectType;
		uint32_t m_objectId;
	};
}
