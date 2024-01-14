#pragma once

#include "imgui-editor-precompiled.h"

class LayerManagement {
public:
	void List(drawTarget target);
	void Render(ImDrawList* draw, drawTarget target);
	void Edit(int index);
	void AddLayer(drawTarget target, bool sideWorkspace);

	void Drag(int index);
	void Resize(int index);
	void Select(int index);
	void Tools();
};

extern std::shared_ptr<LayerManagement> layerManagement;