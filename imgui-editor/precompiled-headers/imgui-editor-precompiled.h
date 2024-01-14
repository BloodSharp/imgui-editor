#pragma once

#include <memory>
#include <string>
#include <vector>
#include <thread>
#include <algorithm>
#include <unordered_map>
#include <functional>
#include <any>
#include <cstddef>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <format>
#include <cstdarg>

#ifdef _WIN32
#include <windows.h>
#include <filesystem>
#include <sysinfoapi.h>
#include <mmsystem.h>
#else
#define SDL_MAIN_HANDLED
#include <SDL.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL_opengles2.h>
#else
#include <SDL_opengl.h>
#endif
#endif

#include <nlohmann/json.hpp>

#include "../src/imgui/imgui.h"
#include "../src/imgui/imgui_internal.h"
#include "../src/imgui/imgui_impl_opengl3.h"
#include "../src/imgui/imgui_impl_sdl2.h"
#include "../src/imgui/imgui_tweaker.hpp"

#include "../defines.h"
#include "../entry.hpp"

#include "../dependencies/assets/faprolight.hpp"
#include "../dependencies/assets/hashes.h"
#include "../dependencies/assets/SFUIDisplay.hpp"
#include "../dependencies/console/console.hpp"
#include "../dependencies/modals/modals.hpp"
#include "../dependencies/notifies/notifies.h"

#include "../src/context.hpp"
#include "../src/filesystem/filesystem.hpp"
#include "../src/history/history.hpp"
#include "../src/installer/installerSystem.hpp"
#include "../src/interface/elements.hpp"
#include "../src/interface/homepage.hpp"
#include "../src/interface/interface.hpp"
#include "../src/interface/transformDrawList.hpp"
#include "../src/layerSystem/layerManagement.hpp"
#include "../src/layerSystem/layerSystem.hpp"
#include "../src/projects/projectSystem.hpp"
#include "../src/prototypeSystem/prototypeSystem.hpp"
#include "../src/utils/utils.hpp"
#include "../src/utils/workspaceKeybinds.hpp"
#include "../src/workspace/prototypeItems.hpp"
#include "../src/workspace/prototypeMananger.hpp"
#include "../src/workspace/windowSettings.hpp"
#include "../src/workspace/widgets/checkboxSettings.hpp"


#include "src/interface/elements.hpp"
#include "src/interface/interface.hpp"
#include "src/filesystem/filesystem.hpp"
#include "src/utils/workspaceKeybinds.hpp"
#include "src/utils/utils.hpp"

#include "dependencies/console/console.hpp"
#include "dependencies/notifies/notifies.h"

#include "src/installer/installerSystem.hpp"