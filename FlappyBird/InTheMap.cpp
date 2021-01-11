#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Names.h"
#include "InTheMap.h"

InTheMap::InTheMap(string MapName1) { MapName = MapName1; }

void InTheMap::execute() { cout << endl << "In the map " << MapName << endl; }