#include <iostream>
#include "Command.h"
using namespace std;
#pragma once

class PlayingAs : public Command {
public:
	PlayingAs(string BirdName1);
	string BirdName;
	void execute();
};