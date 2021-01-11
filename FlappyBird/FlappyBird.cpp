#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Game.h"
#include "Bird.h"
#include "Welcome.h"
#include "StartText.h"
#include "EndText.h"
#include "Endings.h"
#include "FirstEnding.h"
#include "SecondEnding.h"
#include "Luck.h"
#include "Names.h"
#include "ChooseName.h"
#include "PrintName.h"
#include "Macro.h"
#include "Command.h"
#include "PlayingAs.h"
#include "InTheMap.h"

using namespace std;

int main()
{
    FlappyBirdGame game;
    Bird flappy;
    Welcome welcome;
    StartText starttext;
    EndText endtext;
    ChooseName chooseName;
    PrintName printName;
    Macro macro;

    welcome.Text();
    chooseName.templateMethod();
    printName.templateMethod();

    int StartPos=9, FirstWall = 10, SecondWall = 20, ThirdWall = 30, BirdPosX = 3 , Pos0 = 0, Pos1 = 1, Pos2 = 2, SleepTime = 100, EndingType = 1;
    flappy.set(0);
    flappy.setBirdPos(StartPos);

    while(flappy.BirdPos > flappy.DefaultPossition) {
        bool Working = true;
        game.X[Pos0] = FirstWall;
        game.X[Pos1] = SecondWall;
        game.X[Pos2] = ThirdWall;

        game.Random(game.Y);
        starttext.Text();
        cin >> game.Start;

        if (game.Start == "Yes")
        {
            while (Working == true)
            {
                flappy.movement(flappy.Button, flappy.BirdPos);
                game.map(game.Game);
                game.Game[flappy.BirdPos][BirdPosX] = "^ ";
                game.wallbuilding(game.X, game.Y, game.Game);
                flappy.BirdPos++;
                flappy.failure(game.X, game.Game, flappy.BirdPos);

                if (game.Game[flappy.BirdPos][BirdPosX] == "* " || game.Game[flappy.BirdPos][BirdPosX] == "| ")
                    Working = false;

                Sleep(SleepTime);
                system("cls");
            }
        }
        else
            break;
    }
    cout << endl;
    endtext.Text();

    macro.add(new PlayingAs(chooseName.BirdName));
    macro.add(new InTheMap(chooseName.MapName));
    macro.run();

    Luck* pLuck = new Luck(EndingType);
    Endings* pEnding = pLuck->getEnding();
    pEnding->printEnding();

    return 0;
}