#pragma once

#include "imgui-editor-precompiled.h"

class interfaceSystem {
public:
	void Render();

private:
	void Mainbar();
	void Sidebar();
	void Navigation();
	void Infobar();
};

extern std::shared_ptr<interfaceSystem> gInterfaceSystem;