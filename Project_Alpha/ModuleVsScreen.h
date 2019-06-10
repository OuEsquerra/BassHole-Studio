#pragma once
#ifndef __MODULEVSSCREEN_H__
#define __MODULEVSSCREEN_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class ModuleVsScreen : public Module
{
public:
	ModuleVsScreen();
	~ModuleVsScreen();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture* graphics = nullptr;
	SDL_Rect vs_screen;

};

#endif // __MODULEVSSCREEN_H__