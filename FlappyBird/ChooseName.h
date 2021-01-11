#pragma once
#include <iostream>
#include "Names.h"
using namespace std;

class ChooseName : public Names
{
public:
    static int cc;
    string BirdName, MapName;
    void ChooseBird();
    void ChooseMap();
};