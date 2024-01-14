#pragma once

#include "imgui-editor-precompiled.h"

class modalManager {
public:
	void Instance();
	void Run(std::function<void()> func, ImVec2 size, std::string naming);

	bool m_bShow = false;
	std::string name = "";

private:
	ImAnimations::Animator<const char*, float> m_animator;

	ImVec2 m_v2Size;
	std::function<void()> m_fContent;
};

extern std::shared_ptr<modalManager> gModalManager;