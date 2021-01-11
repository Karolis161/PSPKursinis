#include <iostream>
#include "Command.h"
using namespace std;
#pragma once

class InTheMap : public Command {
public:
	InTheMap(string MapName1);
	string MapName;
	void execute();
};