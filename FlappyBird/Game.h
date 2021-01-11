#include <iostream>
using namespace std;
#pragma once

class FlappyBirdGame {
public:
    int X[3], Y[3], mapsize1 = 20, mapsize2 = 30, Border1 = 0, Border2  = 19, Wall = 3, Space = 4;
    string Game[20][30], Start;
       
    string getGame();
    string getStart();
    int getX();
    int getY();
    void setGame(string Game[20][30]);
    void setStart(string Start);
    void setX(int X[3]);
    void setY(int Y[3]);
    void map(string Game[20][30]);
    void wallbuilding(int X[3], int Y[3], string Game[20][30]);
    void Random(int Y[3]);
};