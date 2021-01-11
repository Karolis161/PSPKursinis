#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Bird.h"

    int BirdPos, DefaultPossition;;
    char Button;

    int Bird :: getBirdPos(){
        return BirdPos;
    }

    int Bird :: getButton(){
        return Button;
    }

    void Bird :: setBirdPos(int BirdPos) {
        this->BirdPos = BirdPos;
    }

    void Bird :: setButton(char Button) {
        this->Button = Button;
    }

    void Bird :: movement(char& Button, int& BirdPos) {
        if (_kbhit())
        {
            Button = _getch();
            BirdPos = BirdPos - Jump;
        }
    }

    void Bird :: failure(int X[3], string Game[20][30], int BirdPos) {
        for (int i = 0; i < Wall; i++)
        {
            if (X[i] == Position1)
            {
                X[i] = Position2;
            }
        }
    }

    void Bird :: set(int h) {
        DefaultPossition = h;
    }