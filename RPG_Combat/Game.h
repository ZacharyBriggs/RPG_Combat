#pragma once
#include "Player.h"
#include "Slime.h"

class Game
{
private:
	Player* mPlayer;
	Enemy* mEnemy;
	Slime* mSlime;
public:
	Game();
	~Game();
	void LevelUp();
	void Turn(char action,Enemy* enemy);
	bool DeathCheck();
};