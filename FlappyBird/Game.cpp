#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Game.h"


  string FlappyBirdGame:: getGame(){
        return Game[mapsize1][mapsize2];
    }

  string FlappyBirdGame::getStart(){
        return Start;
    }

    int FlappyBirdGame:: getX(){
        return X[Wall];
    }

    int FlappyBirdGame :: getY()  {
        return Y[Wall];
    }

    void FlappyBirdGame :: setGame(string Game[20][30]) {
        this->Game[mapsize1][mapsize2] = Game[mapsize1][mapsize2];
    }

    void FlappyBirdGame :: setStart(string Start) {
        this->Start = Start;
    }

    void FlappyBirdGame:: setX(int X[3]) {
        this->X[Wall] = X[Wall];
    }

    void FlappyBirdGame :: setY(int Y[3]) {
        this->Y[Wall] = Y[Wall];
    }

    void FlappyBirdGame :: map(string Game[20][30]) {
        for (int i = 0; i < mapsize1; i++)
        {
            for (int j = 0; j < mapsize2; j++)
            {
                cout << Game[i][j];

                if (i == Border1 || i == Border2)
                    Game[i][j] = "* ";
                else
                    Game[i][j] = "  ";
            }
            cout << endl;
        }
    }

    void FlappyBirdGame:: wallbuilding(int X[3], int Y[3], string Game[20][30]) {
        for (int i = 0; i < Wall; i++)
        {
            X[i]--;
            for (int j = 1; j < Border2; j++)
            {
                Game[j][X[i]] = "| ";
            }

            Game[Y[i]][X[i]] = "  ";

            for (int k = 1; k < Space; k++)
            {
                Game[Y[i] + k][X[i]] = "  ";
            }
        }
    }

    void FlappyBirdGame :: Random(int Y[3]) {

        for (int i = 0; i < Wall; i++)
        {
            int RandNum = rand() % 10 + 1;
            Y[i] = RandNum;
        }
    }