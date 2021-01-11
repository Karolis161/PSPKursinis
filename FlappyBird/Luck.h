#include <iostream>
#include "Endings.h"
#include "FirstEnding.h"
#include "SecondEnding.h"
using namespace std;
#pragma once

class Luck {
public:
    int Ending1 = 1, Ending2 = 2;
    Luck(int type);
    ~Luck();
    Endings* getEnding();
private:
    Endings* printEnding;
};