#pragma once

#include <string>

namespace GameFramework
{
	inline std::string LoadAsset(const std::string p_path = "")
	{
		return ASSETS_PATH + p_path;
	}
}
