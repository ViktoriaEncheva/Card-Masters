#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game& game = Game::getInstance();
	game.run();
	
	return 0;
}
