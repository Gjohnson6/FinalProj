#pragma once
#include "Button.h"
#include <vector>
#include <iostream>

using namespace std;

//This class handles drawing menus and detecting clicks
class Menu
{
public:
	Menu();
	~Menu();

	void DisplayFunc();
	int DetectClick(int x, int y);
protected:
	vector<Button> buttons;
	void addButton(int menuNum, string name);
};