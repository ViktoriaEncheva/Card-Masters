#include "Player.h"
#include "Creature.h"

class Game
{
	public:	
		Player plr1;
		Player plr2;

		static Game& getInstance();
		void run();
		~Game();

	private:		
		Player winner;
		bool turnIndicator;		// true if it's player1's turn

		Game();	
		void printField() const;
		void turn();
		bool isOver() const;
};

