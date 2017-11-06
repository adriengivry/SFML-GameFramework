#pragma once

#include <string>

namespace PlatformerEngine
{
	inline std::string LoadAsset(const std::string p_path = "")
	{
		return ASSETS_PATH + p_path;
	}
}
