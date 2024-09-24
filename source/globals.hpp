#ifndef GLOBALS_H
#define GLOBALS_H

#include "menu.hpp"
#include "node.hpp"

#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include <citro2d.h>
#include <vector>

#define SCREEN_WIDTH 400
#define SCREEN_HEIGHT 240

#define STACKSIZE (32 * 1024)

// Input Stuff
extern SwkbdButton button;
extern u32 kDown;


extern const char *selector;
extern int selected;

// Define Menus
extern short drawMenu;
extern Menu *mainMenu;
extern Menu *algoMenu;
extern Menu *settingsMenu;

extern Menu *activeMenu;

// Sound Stuff
extern ndspWaveBuf waveBuf[2];
extern u32 *audioBuffer;

// Array Stuff
extern unsigned int *array;
extern unsigned int arrayLen;
extern const unsigned int maxArrayVal;
extern unsigned int delayMs;

extern bool isTree;
extern bool newArrayOnStart;
extern std::vector<Node*> nodeArray;

// Render stuff
extern C3D_RenderTarget *top;
extern u32 bar_clr;
extern u32 active_clr;
extern u32 clrClear;
extern u32 doneClr;
extern const size_t maxBars;


// Threading vars
extern Thread sortThread;
extern s32 prio;

extern volatile bool doneSorting;
extern volatile unsigned int activeIndex;

// Sorting State
extern int isSorting;
#endif
