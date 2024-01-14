#pragma once

#include "imgui-editor-precompiled.h"

class PrototypeManager
{
public:
	void Render();
	void Infobar();
	void Sidebar();
	void Mainbar();

	widgetPrototype* currentEditor;
};

extern std::shared_ptr<PrototypeManager> prototypeManager;

