#include <iostream>
#include <vector>
#include "PlayingAs.h"
#include "ChooseName.h"

using namespace std;

PlayingAs::PlayingAs(string BirdName1) { BirdName = BirdName1; }

void PlayingAs::execute() { cout << "You were playing as " << BirdName; }