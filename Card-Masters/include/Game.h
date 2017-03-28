#include "Player.h"
#include "Creature.h"

class Game
{
	public:
		Player plr1;
		Player plr2;
		Player winner;
		bool turnIndicator;		// true of it's player1's turn
		//Creature field[];

		int foo;
		int bar;

		static Game& getInstance();
		void printField();
		void turn();
		bool isOver();		
		~Game();
		void incrFoo();
	private:
		Game(Game const&);
		Game();
		void operator=(Game const&);
};

