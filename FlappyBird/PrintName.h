#pragma once
#include <iostream>
#include "Names.h"
using namespace std;

class PrintName : public Names
{
public:
    void ChooseBird();
    void ChooseMap();
};