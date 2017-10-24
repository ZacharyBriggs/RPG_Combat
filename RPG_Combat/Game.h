#pragma once
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include <fstream>

class Game
{
private:
	Player* mPlayer;
	Enemy* mEnemy;
public:
	Game();
	~Game();
	void EnemyGraphics();
	void Turn(char action);
	bool DeathCheck();
};