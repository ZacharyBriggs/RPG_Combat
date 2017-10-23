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
	mEnemy->Attack(mPlayer);
}