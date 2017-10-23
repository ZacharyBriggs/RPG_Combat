#include "Entity.h"
#include "Player.h"
#include "Enemy.h"
#include "Game.h"
int main()
{
	Game newGame;
	while (true)
	{
		std::cout << "Pick an action.\n";
		char action;
		std::cin >> action;
		newGame.Turn(action);
	}
}