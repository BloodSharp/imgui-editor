#pragma once

#include "imgui-editor-precompiled.h"

class CheckboxSettings
{
public:
	void Render();
	void Infobar();
	void Sidebar();
	void Mainbar();
};

extern std::shared_ptr<CheckboxSettings> checkboxSettings;

