#include <iostream>
#include <vector>
#include "Command.h"
using namespace std;
#pragma once

class Macro {
	vector<Command*> commands;
public:
	void add(Command* command);
	void run();
};