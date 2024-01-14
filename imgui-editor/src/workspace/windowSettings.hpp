#pragma once

#include "imgui-editor-precompiled.h"

class WindowSettings
{
public:
	void Render();
	void Infobar();
	void Sidebar();
	void Mainbar();
};

extern std::shared_ptr<WindowSettings> windowSettings;

