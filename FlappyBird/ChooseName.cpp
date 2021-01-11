#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Names.h"
#include "ChooseName.h"

    void ChooseName :: ChooseBird() {
        cout << "Choose name of the bird" << endl;
        cin >> BirdName;
    }
    void ChooseName :: ChooseMap() {
        cout << "Choose name of the map" << endl;
        cin >> MapName;
    }