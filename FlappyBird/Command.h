#include <iostream>
using namespace std;
#pragma once

class Command {
public:
	virtual void execute() = 0;
};