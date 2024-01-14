#pragma once

#include "imgui-editor-precompiled.h"

struct projectData {
	std::string filename;
	std::string name;
	std::string data;
};

class fileSystem
{
public:
	void FetchProjects();
	void CreateProject(std::string name);
	void SaveProject();

public:
	std::string selectedProject;

	std::vector<projectData> projects;
};

extern std::shared_ptr<fileSystem> gFileSystem = std::make_shared<fileSystem>();