#include <iostream>
#include <vector>
#include "Command.h"
#include "Macro.h"

	void Macro :: add(Command* command) { commands.push_back(command); }
	void Macro :: run() {
		vector<Command*>::iterator it = commands.begin();
		while (it != commands.end()) 
			(*it++)->execute();
	}