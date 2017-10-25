#include "Game.h"
Game::Game()
{
	mPlayer = new Player;
	mEnemy = new Enemy;
}
Game::~Game()
{
}
void Game::Turn(char action)
{
	std::cout << mPlayer->GetHP() << std::endl;
	std::cout << mEnemy->GetHP() << std::endl;
	system("pause");
	if (action == 'a')
		mPlayer->Attack(mEnemy);
	if (action == 'd')
		mPlayer->Defend();
	if (action == 'r')

	mEnemy->Attack(mPlayer);
}
bool Game::DeathCheck()
{
	if (mPlayer->GetHP() <= 0)
	{
		std::cout << "You died!";
		return true;
	}
	else if (mEnemy->GetHP() <= 0)
	{
		std::cout << "You won!";
		return true;
	}
	return false;
}