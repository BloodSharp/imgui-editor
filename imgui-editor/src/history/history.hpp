#pragma once

#include "imgui-editor-precompiled.h"

class historySystem {
public:
	void RegisterHistoryItem();
	void Undo();
	void Redo();
	void Clear();

private:
	std::size_t historyIterator = 0;
	std::vector<currentProjectData> historyItems;
};

extern std::shared_ptr<historySystem> gHistorySystem;