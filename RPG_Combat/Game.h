#pragma once
#include <iostream>
#include "Player.h"
#include "Enemy.h"
class Game
{
private:
	Player* mPlayer;
	Enemy* mEnemy;
public:
	Game();
	~Game();
	void Turn(char action);
	bool DeathCheck();
};