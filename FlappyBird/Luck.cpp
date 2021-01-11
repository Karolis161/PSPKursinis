#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "Luck.h"
#include "Endings.h"

Luck :: Luck (int type) {
    if (type == Ending1)
        printEnding = new FirstEnding();
    else if (type == Ending2)
        printEnding = new SecondEnding();
    else
        printEnding = NULL;
}
Luck :: ~Luck() {
    if (printEnding) {
        delete[] printEnding;
        printEnding = NULL;
    }
}
Endings* Luck :: getEnding() {
    return printEnding;
}