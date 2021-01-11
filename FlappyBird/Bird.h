#include <iostream>
using namespace std;
#pragma once

class Bird {
public:
    int BirdPos, DefaultPossition, Jump = 3, Wall = 3, Position1 = 1, Position2 = 30;
    char Button;

    int getBirdPos();
    int getButton();
    void setBirdPos(int BirdPos);
    void setButton(char Button);
    void movement(char& Button, int& BirdPos);
    void failure(int X[3], string Game[20][30], int BirdPos);
    void set(int h);
};