#ifndef MENU_H
#define MENU_H

#include "globals.hpp"
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <3ds.h>

// Main menu text
extern const std::vector<std::string> MENU_TEXT;

// Algo menu text
extern const std::vector<std::string> ALGO_TEXT;

// Settings text
extern const std::vector<std::string> SETTINGS_TEXT;

// Description text
extern const std::vector<std::string> DESCRIPTION_TEXT;

class Menu
{
    private:
        const std::string selector = ">";
        
    public:
        static void clearConsole();
        int menuLen;
        Menu(const std::vector<std::string> text, void (*handlerFunction)());
        
        void draw();
        void handleInput();
        std::vector<std::string> MENU_TEXT;
        void (*handlerFunction)();
};

void switchMenu(Menu *menu);

void settingsMenuHandler();
void algoMenuHandler();
void mainMenuHandler();

void initSort();
#endif
