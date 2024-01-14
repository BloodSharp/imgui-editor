#pragma once

#include "imgui-editor-precompiled.h"

class consoleMananger
{
public:
	void init( );
	void print( const char* fmt, ... );
private:
	HANDLE _out = NULL, _old_out = NULL;
	HANDLE _err = NULL, _old_err = NULL;
	HANDLE _in = NULL, _old_in = NULL;
};

extern std::shared_ptr<consoleMananger> conManager;