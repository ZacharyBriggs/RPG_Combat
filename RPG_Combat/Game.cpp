#include "Game.h"
Game::Game()
{
	mPlayer = new Player;
	mEnemy = new Enemy;
	mSlime = new Slime;
}
Game::~Game()
{
}
void Game::LevelUp()
{
	mPlayer->LevelUp();
}
void Game::Turn(char action,Enemy* enemy)
{
	std::cout << mPlayer->GetHP() << std::endl;
	std::cout << enemy->GetHP() << std::endl;
	system("pause");
	if (action == 'a')
		mPlayer->Attack(enemy);
	if (action == 'd')
		mPlayer->Defend();
	if (action == 'r')

	enemy->Attack(mPlayer);
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
		mPlayer->mExp += mEnemy->GetExp();
		return true;
	}
	return false;
}