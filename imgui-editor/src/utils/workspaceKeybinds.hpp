#pragma once

#include "imgui-editor-precompiled.h"

class WorkspaceKeybinds {
public:
	void Tools();
	void Save();
	void Layer();
	void History();

	void HandleMouse(ImVec2& pos);
};

extern std::shared_ptr<WorkspaceKeybinds> workspaceKeybinds;

