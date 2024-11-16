#include <iostream>
using namespace std;
#include "Game.h"

int main()
{
	srand((unsigned int)time(nullptr));
	Game game;
	Game Init();

	while (true)
	{
		game.Update();
	}

	return 0;
}