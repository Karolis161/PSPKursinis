#pragma once
#include <iostream>
using namespace std;


class Names
{
public:
    void templateMethod();
    virtual void ChooseBird() = 0;
    virtual void ChooseMap() = 0;
};