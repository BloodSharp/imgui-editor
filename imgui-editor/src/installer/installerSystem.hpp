#pragma once

#include "imgui-editor-precompiled.h"

class installerSystem {
public:
	void SetStyles();
	void GenerateDirectories();
};

extern std::shared_ptr<installerSystem> gInstallerSystem;