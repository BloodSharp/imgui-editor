#pragma once

#include "imgui-editor-precompiled.h"

class homepageSystem {
public:
	void Render();

	int selectedTab = 0;
};

extern std::shared_ptr<homepageSystem> gHomepageSystem;