#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
	Game& g = Game::getInstance();
	cout << g.foo << " - " << g.bar << endl;
	g.incrFoo();

	Game& g2 = Game::getInstance();
	cout << g2.foo << " - " << g2.bar << endl;
	return 0;
}
