// Copyright (C) 2003-2008 Dolphin Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official SVN repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/

#ifndef WIIMOTE_CONSOLE_H
#define WIIMOTE_CONSOLE_H

//////////////////////////////////////////////////////////////////////////////////////////
// Includes
// ŻŻŻŻŻŻŻŻŻŻŻŻŻ
#include <iostream>
#include "ConsoleWindow.h"
//////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
// Declarations
// ŻŻŻŻŻŻŻŻŻŻŻŻŻ
std::string Tm(bool Ms = false);
int PrintFile(int a, const char *fmt, ...);
void ClearScreen();

#ifdef _WIN32
	HWND GetConsoleHwnd(void);
#endif
///////////////////////////////

#endif // WIIMOTE_CONSOLE_H

